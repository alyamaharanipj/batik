#include "MathGraph.h"
#include <graphics.h>
#include <math.h>
#include <iostream>
using namespace std;

MathGraph::MathGraph()
{
    this->dilatationFactor = 1;
    translatePoint.setXY(0,0);
    this->scale = dilatationFactor*10;
    mainPoint.setXY(getmaxx()/2 + translatePoint.getX(), getmaxy()/2 + -1*translatePoint.getY());
}

void MathGraph::drawParabolaGraph(){
    mainPoint.setXY(getmaxx()/2 + translatePoint.getX(), getmaxy()/2 + -1*translatePoint.getY());
    for(float x = -10; x <= 10; x+=0.0001){
        float y = (pow(x, 2));
        float xForScreen = scale* x + mainPoint.getX();
        float yForScreen = scale* -1*y + mainPoint.getY();
        putpixel(xForScreen, yForScreen, WHITE);
    }
    outtextxy(mainPoint.getX()+5,mainPoint.getY()/2,"y = x^2");
}


void MathGraph::dilate(float dilatationFactor)
{
    this->dilatationFactor = dilatationFactor;
    this->scale = 10*dilatationFactor;
}

float MathGraph::getDilatationFactor()
{
    return dilatationFactor;
}

void MathGraph::translate(Point translatePoint)
{
    this->translatePoint = translatePoint;
    mainPoint.setXY(getmaxx()/2 + translatePoint.getX(), getmaxy()/2 + -1*translatePoint.getY());
}

Point MathGraph::getTranslatePoint()
{
    return translatePoint;
}
