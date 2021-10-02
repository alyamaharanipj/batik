#include <Square.h>
#include <math.h>

Square::Square(int side, Point point){
    this->side = side;
    this->point.setXY(point.getX(),point.getY());
    setCorner();
}

Square::Square(){}

void Square::setCorner(){
    topLeftCorner.setXY(point.getX() - side/2,point.getY() - side/2);
    topRightCorner.setXY(point.getX() + side/2, point.getY() - side/2);
    bottomLeftCorner.setXY(point.getX() - side/2, point.getY() + side/2);
    bottomRightCorner.setXY(point.getX() + side/2, point.getY() + side/2);
}

// Getters
int Square::getSide() {
   return side;
}

// Setters
void Square::setSide(int side) {
   this->side = side;
}


