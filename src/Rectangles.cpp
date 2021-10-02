/* Implementation for Rectangle (Rectangle.cpp) */
#include <Rectangles.h>
#include <math.h>
#include <Stroke.h>


Rectangles::Rectangles(int length, int width, Point point){
    this->length = length;
    this->width = width;
    this->point.setXY(point.getX(),point.getY());
    setCorner();
}

Rectangles::Rectangles(){}

void Rectangles::setCorner(){
    topLeftCorner.setXY(point.getX() - length/2,point.getY() - width/2);
    topRightCorner.setXY(point.getX() + length/2, point.getY() - width/2);
    bottomLeftCorner.setXY(point.getX() - length/2, point.getY() + width/2);
    bottomRightCorner.setXY(point.getX() + length/2, point.getY() + width/2);
}

// Getters
int Rectangles::getLength(){
   return length;
}

int Rectangles::getWidth(){
   return width;
}

// Setters
void Rectangles::setLength(int length) {
   this->length = length;
}

void Rectangles::setWidth(int width) {
   this->width = width;
}

