/* Implementation for Shape class (Shape.cpp) */
#include <Triangle.h>
#include <Stroke.h>

// Constructor
Triangle::Triangle(){
    this->noneColor = color;
}

void Triangle::rotate(double angle) {
    topCorner.rotate(angle);
    leftCorner.rotate(angle);
    rightCorner.rotate(angle);
}

void Triangle::translate(Point translatePoint) {
    topCorner.translate(translatePoint.getX(),translatePoint.getY());
    leftCorner.translate(translatePoint.getX(),translatePoint.getY());
    rightCorner.translate(translatePoint.getX(),translatePoint.getY());
}

void Triangle::scale(float scaleXFactor, float scaleYFactor) {
    topCorner.scale(scaleXFactor, scaleYFactor);
    leftCorner.scale(scaleXFactor, scaleYFactor);
    rightCorner.scale(scaleXFactor, scaleYFactor);
}

void Triangle::reflect() {
    topCorner.reflect();
    leftCorner.reflect();
    rightCorner.reflect();
}

void Triangle::draw(){
    Stroke left(topCorner,leftCorner);
    left.setColor(color);
    left.setType(type);
    left.setPxSize(pxSize);
    left.draw();

    Stroke bottom(leftCorner,rightCorner);
    bottom.setColor(noneColor);
    bottom.setType(type);
    bottom.setPxSize(pxSize);
    bottom.draw();

    Stroke right(topCorner,rightCorner);
    right.setColor(color);
    right.setType(type);
    right.setPxSize(pxSize);
    right.draw();
}

void Triangle::setTopCorner(Point topCorner)
{
    this->topCorner = topCorner;
}

Point Triangle::getTopCorner()
{
    return topCorner;
}

void Triangle::setLeftCorner(Point leftCorner)
{
    this->leftCorner = leftCorner;
}

Point Triangle::getLeftCorner()
{
    return leftCorner;
}

void Triangle::setRightCorner(Point rightCorner)
{
    this->rightCorner = rightCorner;
}

Point Triangle::getRightCorner()
{
    return rightCorner;
}

