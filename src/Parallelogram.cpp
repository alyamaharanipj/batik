#include <Parallelogram.h>
#include <math.h>

Parallelogram::Parallelogram(int height, int side, int hypotenuse, Point point){
    this->height = height;
    this->side = side;
    this->hypotenuse = hypotenuse;
    this->point.setXY(point.getX(),point.getY());
    setCorner();
}

void Parallelogram::setCorner(){
    float base = sqrt(pow(hypotenuse,2)- pow(height,2));
    topLeftCorner.setXY(point.getX(),point.getY());
    topRightCorner.setXY(point.getX() + side, point.getY());
    bottomLeftCorner.setXY(point.getX() - base, point.getY() + height);
    bottomRightCorner.setXY(point.getX() - base + side, point.getY() + height);
}

// Getters
int Parallelogram::getSide() {
   return side;
}

// Setters
void Parallelogram::setSide(int side) {
   this->side = side;
}

int Parallelogram::getHeight() {
   return height;
}

// Setters
void Parallelogram::setHeight(int height) {
   this->height = height;
}

int Parallelogram::getHypotenuse() {
   return hypotenuse;
}

// Setters
void Parallelogram::setHypotenuse(int hypotenuse) {
   this->hypotenuse = hypotenuse;
}
