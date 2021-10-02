#include <RightTriangle.h>
#include <math.h>
#include <graphics.h>

RightTriangle::RightTriangle(int height, int bottomSide, Point point){
    this->height = height;
    this->bottomSide = bottomSide;
    this->point.setXY(point.getX(), point.getY());
    setCorner();
}

void RightTriangle::setCorner()
{
    topCorner.setXY(point.getX(), point.getY() - height);
    leftCorner.setXY(point.getX(), point.getY());
    rightCorner.setXY(point.getX() + bottomSide, point.getY());
}

// Getters
int RightTriangle::getHeight() {
   return height;
}

// Setters
void RightTriangle::setHeight(int height) {
   this->height = height;
}

// Getters
int RightTriangle::getBottomSide() {
   return bottomSide;
}

// Setters
void RightTriangle::setBottomSide(int bottomSide) {
   this->bottomSide = bottomSide;
}

