#include <Point.h>
#include <cmath>
#include <graphics.h>
#include <iostream>
using namespace std;

//Default Constructor
Point::Point(){}

//Constructor
Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

//Setter dan getter
void Point::setX(float x){
    this->x = x;
}

void Point::setY(float y){
    this->y = y;
}

void Point::setXY(float x, float y){
    this->x = x;
    this->y = y;
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

float Point::getXScreen()
{
    return x * 10 + getmaxx()/2;
}

float Point::getYScreen()
{
    return -1 * y * 10 + getmaxy()/2 ;
}

//Method untuk rotasi titik
void Point::rotate(float angle)
{
    angle =  angle * (M_PI / 180);
    float xTemp = x;
    float yTemp = y;
    this->x = xTemp*cos(angle) - yTemp*sin(angle);
    this->y = xTemp*sin(angle) + yTemp*cos(angle);
}

//Method untuk translasi titik
void Point::translate(float xTranslate, float yTranslate)
{
    this->x = x + xTranslate;
    this->y = y + yTranslate;
}

//Method untuk scaling titik
void Point::scale(float scaleXFactor, float scaleYFactor)
{
    this->x = x * scaleXFactor;
    this->y = y * scaleYFactor;
}

//Method untuk refleksi titik
void Point::reflect()
{
    this->x = -x;
    this->y = y;
}
