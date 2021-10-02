/* Implementation for Shape class (Shape.cpp) */
#include <Shape.h>
#include <graphics.h>
#include <math.h>

// Constructor
Shape::Shape(){
    this->color = WHITE;
    this->type = plain;
    this->pxSize = 1;
    this->angle = 0;
    this->scaleXFactor = 1;
    this->scaleYFactor = 1;
    this->scale = scaleXFactor*10;
    translatePoint.setXY(0,0);
}

// Getter
int Shape::getColor() {
   return this->color;
}

// Setter
void Shape::setColor(int color) {
   this->color = color;
   this->noneColor = color;
}

LineType Shape::getType(){
   return type;
}

void Shape::setType(LineType type){
    this->type = type;
}

int Shape::getPxSize(){
    return pxSize;
}

void Shape::setPxSize(int pxSize){
    this->pxSize = pxSize;
}

// Getter
Point Shape::getPoint() {
   return point;
}

// Setter
void Shape::setPoint(Point point) {
   this->point = point;
}

void Shape::setNoneColor() {
   this->noneColor = 0;
}
