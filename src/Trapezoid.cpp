#include <Trapezoid.h>
#include <math.h>

Trapezoid::Trapezoid(int height, int topSide, int hypotenuse, Point point){
    this->height = height;
    this->topSide = topSide;
    this->hypotenuse = hypotenuse;
    this->point.setXY(point.getX(),point.getY());
    setCorner();
}

void Trapezoid::setCorner(){
    float base = sqrt(pow(hypotenuse,2)- pow(height,2));
    topLeftCorner.setXY(point.getX(),point.getY());
    topRightCorner.setXY(point.getX() + topSide, point.getY());
    bottomLeftCorner.setXY(point.getX() - base, point.getY() + height);
    bottomRightCorner.setXY(point.getX() + topSide + base, point.getY() + height);
}

// Getters
int Trapezoid::getTopSide() {
   return topSide;
}

// Setters
void Trapezoid::setTopSide(int side) {
   this->topSide = side;
}

int Trapezoid::getHeight() {
   return height;
}

// Setters
void Trapezoid::setHeight(int height) {
   this->height = height;
}

int Trapezoid::getHypotenuse() {
   return hypotenuse;
}

// Setters
void Trapezoid::setHypotenuse(int hypotenuse) {
   this->hypotenuse = hypotenuse;
}
