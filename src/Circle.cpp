#include "Circle.h"
#include <iostream>
#include <graphics.h>

//Constructor class Circle
Circle::Circle(Point midPoint, int radius)
{
    this->point = midPoint;
    this->radius = radius;
    this->pxSize = 1;
    this->type = plain;
}

//Default Constructor
Circle::Circle(){}

//Setter dan getter
void Circle::setRadius(int radius){
    this->radius = radius;
}

// Getters
int Circle::getRadius() {
   return radius;
}

//Method untuk menggambar lingkaran
void Circle::draw(){
    int x_centre = point.getXScreen();
    int y_centre = point.getYScreen();
    for(int i=0;i<pxSize;i++)
    {
        midPoint(x_centre,y_centre,radius+i);
    }
}

//Algoritma midpoint
void Circle::midPoint(int x_centre, int y_centre, int r){

    int x = r, y = 0, cnt = 0, dash = 0, dot = 0;

	// Printing the initial point on the axes
	// after translation
    putpixel(x+x_centre,y+y_centre,color);

	// When radius is zero only a single
	// point will be printed
	if (r > 0)
	{
	    putpixel(x+x_centre,-y+y_centre,color);
	    putpixel(y+x_centre,x+y_centre,color);
	    putpixel(-y+x_centre,x+y_centre,color);
	}

	// Initialising the value of P
	int P = 1 - r;
	while (x > y)
	{
		y++;

		// Mid-point is inside or on the perimeter
		if (P <= 0)
			P = P + 2*y + 1;
		// Mid-point is outside the perimeter
		else
		{
			x--;
			P = P + 2*y - 2*x + 1;
		}

		// All the perimeter points have already been printed
		if (x < y)
			break;

		// Printing the generated point and its reflection
		// in the other octants after translation
		switch(type){
            case plain :
            {
                putpixel(x+x_centre,y+y_centre,color);
                putpixel(-x+x_centre,y+y_centre,color);
                putpixel(x+x_centre,-y+y_centre,color);
                putpixel(-x+x_centre,-y+y_centre,color);
            }break;
            case dotted :
            {
                if((cnt%10==0)){
                    putpixel(x+x_centre,y+y_centre,color);
                    putpixel(-x+x_centre,y+y_centre,color);
                    putpixel(x+x_centre,-y+y_centre,color);
                    putpixel(-x+x_centre,-y+y_centre,color);
                }
            }break;
            case dashed :
            {
                if((cnt%20)){
                    putpixel(x+x_centre,y+y_centre,color);
                    putpixel(-x+x_centre,y+y_centre,color);
                    putpixel(x+x_centre,-y+y_centre,WHITE);
                    putpixel(-x+x_centre,-y+y_centre,color);
                }
            }break;
            case dottedAndDashed : {
                if(dot<2){
                    if((cnt%10==0)){
                        dash = 0;
                        putpixel(x+x_centre,y+y_centre,color);
                        putpixel(-x+x_centre,y+y_centre,color);
                        putpixel(x+x_centre,-y+y_centre,color);
                        putpixel(-x+x_centre,-y+y_centre,color);
                        dot++;
                    }
                }else{
                    if((cnt%20)&&(dash<10)){
                        putpixel(x+x_centre,y+y_centre,color);
                        putpixel(-x+x_centre,y+y_centre,color);
                        putpixel(x+x_centre,-y+y_centre,color);
                        putpixel(-x+x_centre,-y+y_centre,color);
                        dash++;
                    }else{
                        dot = 0;
                    }
                }
            }break;
        }

		// If the generated point is on the line x = y then
		// the perimeter points have already been printed
		if (x != y)
		{
		    switch(type){
                case plain :
                {
                    putpixel(y+x_centre,x+y_centre,color);
                    putpixel(-y+x_centre,x+y_centre,color);
                    putpixel(y+x_centre,-x+y_centre,color);
                    putpixel(-y+x_centre,-x+y_centre,color);
                }break;
                case dotted : {
                    if((cnt%10==0)){
                        putpixel(y+x_centre,x+y_centre,color);
                        putpixel(-y+x_centre,x+y_centre,color);
                        putpixel(y+x_centre,-x+y_centre,color);
                        putpixel(-y+x_centre,-x+y_centre,color);
                    }
                }break;
                case dashed : {
                    if((cnt%20)){
                        putpixel(y+x_centre,x+y_centre,color);
                        putpixel(-y+x_centre,x+y_centre,color);
                        putpixel(y+x_centre,-x+y_centre,color);
                        putpixel(-y+x_centre,-x+y_centre,color);
                    }
                }break;
                case dottedAndDashed : {
                    if(dot<2){
                        if((cnt%10==0)){
                            dash = 0;
                            putpixel(y+x_centre,x+y_centre,color);
                            putpixel(-y+x_centre,x+y_centre,color);
                            putpixel(y+x_centre,-x+y_centre,color);
                            putpixel(-y+x_centre,-x+y_centre,color);
                            dot++;
                        }
                    }else{
                        if((cnt%20)&&(dash<10)){
                            putpixel(y+x_centre,x+y_centre,color);
                            putpixel(-y+x_centre,x+y_centre,color);
                            putpixel(y+x_centre,-x+y_centre,color);
                            putpixel(-y+x_centre,-x+y_centre,color);
                            dash++;
                        }else{
                            dot = 0;
                        }
                    }
                }break;
            }
		}

        cnt++;
	}
}

void Circle::drawQuarter(){
    int x_centre = point.getX();
    int y_centre = point.getY();
    int r = radius;
    int x = r, y = 0;

	// Printing the initial point on the axes
	// after translation
	putpixel(x+x_centre,y+y_centre,color);

	// Initialising the value of P
	int P = 1 - r;
	while (x > y)
	{
		y++;

		// Mid-point is inside or on the perimeter
		if (P <= 0)
			P = P + 2*y + 1;
		// Mid-point is outside the perimeter
		else
		{
			x--;
			P = P + 2*y - 2*x + 1;
		}

		// All the perimeter points have already been printed
		if (x < y)
			break;

		// If the generated point is on the line x = y then
		// the perimeter points have already been printed
		if (x != y)
		{
            putpixel(y+x_centre,x+y_centre,color);
            putpixel(-y+x_centre,x+y_centre,color);
		}
	}
}
void Circle::fillCircle(){
    int x_centre = point.getXScreen();
    int y_centre = point.getYScreen();
    for(int i=0;i<radius;i++)
    {
        midPoint(x_centre,y_centre,radius-i);
    }
}

void Circle::rotate(double angle) {
    point.rotate(angle);
}

void Circle::translate(Point translationPoint){
    point.translate(translationPoint.getX(),translationPoint.getY());
}

void Circle::scale(float scaleFactor) {
    this->radius = radius*scaleFactor;
}
