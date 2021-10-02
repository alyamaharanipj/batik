/* Implementation for Rectangle (Rectangle.cpp) */
#include <Rectangle.h>


Rectangles::Rectangles(int length, int width, Point point){
    this->length = length;
    this->width = width;
    this->point.setXY(point.getX(),point.getY());
    setCorner();
}

void Rectangles::setCorner(){
    topLeftCorner.setXY(point.getX(),point.getY());
    topRightCorner.setXY(point.getX() + length, point.getY());
    bottomLeftCorner.setXY(point.getX(), point.getY() + width);
    bottomRightCorner.setXY(point.getX() + length, point.getY() + width);
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

