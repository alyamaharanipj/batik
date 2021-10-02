/* Implementation for Shape class (Shape.cpp) */
#include <Quadrilateral.h>
#include <Stroke.h>

// Constructor
Quadrilateral::Quadrilateral(){
    this->noneColor = color;
}

//Setter dan getter
void Quadrilateral::setTopLeftCorner(Point topLeftCorner)
{
    this->topLeftCorner = topLeftCorner;
}

Point Quadrilateral::getTopLeftCorner()
{
    return topLeftCorner;
}

void Quadrilateral::setTopRightCorner(Point topRightCorner)
{
    this->topRightCorner = topRightCorner;
}

Point Quadrilateral::getTopRightCorner()
{
    return topRightCorner;
}

void Quadrilateral::setBottomLeftCorner(Point bottomLeftCorner)
{
    this->bottomLeftCorner = bottomLeftCorner;
}

Point Quadrilateral::getBottomLeftCorner()
{
    return bottomLeftCorner;
}

void Quadrilateral::setBottomRightCorner(Point bottomRightCorner)
{
    this->bottomRightCorner = bottomRightCorner;
}

Point Quadrilateral::getBottomRightCorner()
{
    return bottomRightCorner;
}

//Method untuk rotasi shape segi empat
void Quadrilateral::rotate(float angle) {
    topLeftCorner.rotate(angle);
    topRightCorner.rotate(angle);
    bottomLeftCorner.rotate(angle);
    bottomRightCorner.rotate(angle);
}

//Method untuk translasi shape segi empat
void Quadrilateral::translate(Point translatePoint) {
    topLeftCorner.translate(translatePoint.getX(),translatePoint.getY());
    topRightCorner.translate(translatePoint.getX(),translatePoint.getY());
    bottomLeftCorner.translate(translatePoint.getX(),translatePoint.getY());
    bottomRightCorner.translate(translatePoint.getX(),translatePoint.getY());
}

//Method untuk scaling shape segi empat
void Quadrilateral::scale(float scaleXFactor, float scaleYFactor) {
    topLeftCorner.scale(scaleXFactor, scaleYFactor);
    topRightCorner.scale(scaleXFactor, scaleYFactor);
    bottomLeftCorner.scale(scaleXFactor, scaleYFactor);
    bottomRightCorner.scale(scaleXFactor, scaleYFactor);
}

//Method untuk menggambar shape segi empat
void Quadrilateral::draw(){
    Stroke top(topLeftCorner,topRightCorner);
    top.setColor(color);
    top.setType(type);
    top.setPxSize(pxSize);
    top.draw();

    Stroke bottom(bottomLeftCorner,bottomRightCorner);
    bottom.setColor(color);
    bottom.setType(type);
    bottom.setPxSize(pxSize);
    bottom.draw();

    Stroke left(topLeftCorner,bottomLeftCorner);
    left.setColor(color);
    left.setType(type);
    left.setPxSize(pxSize);
    left.draw();

    Stroke right(topRightCorner,bottomRightCorner);
    right.setColor(color);
    right.setType(type);
    right.setPxSize(pxSize);
    right.draw();
}
