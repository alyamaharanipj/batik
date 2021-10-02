#include <Stroke.h>
#include <graphics.h>
#include <math.h>
#include <iostream>

//Constructor
Stroke::Stroke(Point startingPoint, Point endingPoint)
{
    this->startingPoint = startingPoint;
    this->endingPoint = endingPoint;
    this->color = colorLine();
    this->pxSize = 1;
    this->type = plain;
    this->translationPoint.setXY(0,0);
}

//Constructor
Stroke::Stroke(){
    this->color = colorLine();
    this->pxSize = 1;
    this->type = plain;
    this->translationPoint.setXY(0,0);
}

//Setter dan getter
void Stroke::setColor(int color){
    this->color = color;
}

void Stroke::setStartingPoint(Point startingPoint)
{
    this->startingPoint = startingPoint;
}

void Stroke::setEndingPoint(Point endingPoint)
{
    this->endingPoint = endingPoint;
}

Point Stroke::getStartingPoint()
{
    return startingPoint;
}

Point Stroke::getEndingPoint()
{
    return endingPoint;
}

void Stroke::setPxSize(int pxSize){
    this->pxSize = pxSize;
}

void Stroke::setType(LineType type){
    this->type = type;
}

//Method untuk translasi garis
void Stroke::translate(Point translationPoint){
    startingPoint.translate(translationPoint.getX(),translationPoint.getY());
    endingPoint.translate(translationPoint.getX(),translationPoint.getY());
}

//Method untuk rotasi garis
void Stroke::rotate(float angle){
    startingPoint.rotate(angle);
    endingPoint.rotate(angle);
}

//Method untuk scaling garis
void Stroke::scale(float scaleXFactor, float scaleYFactor){
    startingPoint.scale(scaleXFactor, scaleYFactor);
    endingPoint.scale(scaleXFactor, scaleYFactor);
}

//Method untuk menggambar garis
void Stroke::draw(){
    int x1 = startingPoint.getXScreen();
    int x2 = endingPoint.getXScreen();
    int y1 = startingPoint.getYScreen();
    int y2 = endingPoint.getYScreen();

    DDA(x1,y1,x2,y2);
}

//DDA Function for line generation
void Stroke::DDA(int X0, int Y0, int X1, int Y1)
{
	// calculate dx & dy

	int dx = X1 - X0;
	int dy = Y1 - Y0;
	int cnt = 0, dot = 0, dash = 0;

	// calculate steps required for generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// calculate increment in x & y for each steps
	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	// Put pixel for each step
	float X = X0;
	float Y = Y0;

	for (int i = 0; i <= steps; i++)
	{
		switch(type){
            case plain : {putpixel(X,Y,color);}break;
            case dotted : {
                if((cnt%10==0))
                    putpixel(X,Y,color);
            }break;
            case dashed : { //panjang dash = 15, jarak antar dash = 10
                if((cnt%25<15))
                    putpixel(X,Y,color);
            }break;
            case dottedAndDashed : {
                if(dot<2){
                    if((cnt%10==0)){
                        dash = 0;
                        putpixel(X,Y,color);
                        dot++;
                    }
                }else{
                    if((cnt%20)&&(dash<10)){
                        putpixel(X,Y,color);
                        dash++;
                    }else{
                        dot = 0;
                    }
                }
            }break;
        }
        cnt++;
		X += Xinc;		 // increment in x at each step
		Y += Yinc;		 // increment in y at each step
	}
}

//Method untuk random warna garis
int Stroke::colorLine(){
    int pickedColor = rand()%16;
    if(pickedColor!=0){
        return pickedColor;
    }else{
        colorLine();
    }
}
