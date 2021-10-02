#include <EquilateralTriangle.h>
#include <math.h>
#include <graphics.h>
#include <iostream>
using namespace std;

EquilateralTriangle::EquilateralTriangle(int side, Point point){
    this->side = side;
    this->point.setXY(point.getX(), point.getY());
    setCorner();
}

void EquilateralTriangle::setCorner()
{
    topCorner.setXY(point.getX(), point.getY());
    leftCorner.setXY(point.getX() - (side + 1/2), point.getY() - side);
    rightCorner.setXY(point.getX() + (side + 1/2), point.getY() - side);
}

// Getters
int EquilateralTriangle::getSide() {
   return side;
}

// Setters
void EquilateralTriangle::setSide(int side) {
   this->side = side;
}


