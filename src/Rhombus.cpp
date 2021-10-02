#include <Rhombus.h>

Rhombus::Rhombus(int diagonal, Point point){
    this->diagonal = diagonal;
    this->point.setXY(point.getX(),point.getY());
    setCorner();
}

void Rhombus::setCorner(){
    topLeftCorner.setXY(point.getX(),point.getY() + diagonal/2);
    topRightCorner.setXY(point.getX() + diagonal/2, point.getY());
    bottomLeftCorner.setXY(point.getX() - diagonal/2, point.getY());
    bottomRightCorner.setXY(point.getX(), point.getY()- diagonal/2);
}

// Getters
int Rhombus::getDiagonal() {
   return diagonal;
}

// Setters
void Rhombus::setDiagonal(int diagonal) {
   this->diagonal = diagonal;
}

