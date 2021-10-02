#include "Flower.h"
#include <graphics.h>

//Constructor
Flower::Flower(Point midPoint, int length, int width)
{
    this->length = length;
    this->width = width;
    this->midPoint.setXY(midPoint.getX(),midPoint.getY());
    setDefaultColor();
    init();
}

//Setter dan getter
void Flower::setLength(int length)
{
    this->length = length;
}

int Flower::getLength()
{
    return length;
}

void Flower::setWidth(int width)
{
    this->width = width;
}

int Flower::getWidth()
{
    return width;
}

void Flower::setColor(int color)
{
    this->color1 = color;
}

int Flower::getColor()
{
    return color1;
}

void Flower::setPoint(Point midPoint)
{
    this->midPoint.setXY(midPoint.getX(),midPoint.getY());
}

Point Flower::getMidpoint()
{
    return midPoint;
}

//Method untuk rotasi pattern
void Flower::rotate(float angle)
{
    circle.translate(trPoint);
    circle.rotate(angle);
    circle.translate(trPoint2);

    rect.translate(trPoint);
    rect.rotate(angle);
    rect.translate(trPoint2);

    rect2.translate(trPoint);
    rect2.rotate(angle);
    rect2.translate(trPoint2);

    rect3.translate(trPoint);
    rect3.rotate(angle);
    rect3.translate(trPoint2);

    rect4.translate(trPoint);
    rect4.rotate(angle);
    rect4.translate(trPoint2);

    rect5.translate(trPoint);
    rect5.rotate(angle);
    rect5.translate(trPoint2);

    rect6.translate(trPoint);
    rect6.rotate(angle);
    rect6.translate(trPoint2);
}

//Method untuk translasi pattern
void Flower::translate(Point translationPoint)
{
    circle.translate(translationPoint);
    rect.translate(translationPoint);
    rect2.translate(translationPoint);
    rect3.translate(translationPoint);
    rect4.translate(translationPoint);
    rect5.translate(translationPoint);
    rect6.translate(translationPoint);
}

//Method untuk scaling pattern
void Flower::scale(float scaleXFactor, float scaleYFactor)
{
    rect.translate(trPoint);
    rect.scale(scaleXFactor, scaleYFactor);
    rect.translate(trPoint2);

    rect2.translate(trPoint);
    rect2.scale(scaleXFactor, scaleYFactor);
    rect2.translate(trPoint2);

    rect3.translate(trPoint);
    rect3.scale(scaleXFactor, scaleYFactor);
    rect3.translate(trPoint2);

    rect4.translate(trPoint);
    rect4.scale(scaleXFactor, scaleYFactor);
    rect4.translate(trPoint2);

    rect5.translate(trPoint);
    rect5.scale(scaleXFactor, scaleYFactor);
    rect5.translate(trPoint2);

    rect6.translate(trPoint);
    rect6.scale(scaleXFactor, scaleYFactor);
    rect6.translate(trPoint2);
}

//Method untuk menggambar pattern
void Flower::draw()
{
    rect.draw();
    rect2.draw();
    rect3.draw();
    rect4.draw();
    rect5.draw();
    rect6.draw();
    circle.fillCircle();
}

//Method untuk inisialisasi komponen pattern
void Flower::init()
{
    trPoint.setXY(midPoint.getX()*-1,midPoint.getY()*-1);
    trPoint2.setXY(midPoint.getX(),midPoint.getY());

    rect.setLength(length);
    rect.setWidth(width);
    rect.setPoint(midPoint);
    rect.setCorner();

    rect2.setLength(length);
    rect2.setWidth(width);
    rect2.setPoint(midPoint);
    rect2.setCorner();
    rect2.translate(trPoint);
    rect2.rotate(60);
    rect2.translate(trPoint2);

    rect3.setLength(length);
    rect3.setWidth(width);
    rect3.setPoint(midPoint);
    rect3.setCorner();
    rect3.translate(trPoint);
    rect3.rotate(120);
    rect3.translate(trPoint2);

    rect4.setLength(1);
    rect4.setWidth(width*2/3);
    rect4.setPoint(midPoint);
    rect4.setCorner();

    rect5.setLength(1);
    rect5.setWidth(width*2/3);
    rect5.setPoint(midPoint);
    rect5.setCorner();
    rect5.translate(trPoint);
    rect5.rotate(60);
    rect5.translate(trPoint2);

    rect6.setLength(1);
    rect6.setWidth(width*2/3);
    rect6.setPoint(midPoint);
    rect6.setCorner();
    rect6.translate(trPoint);
    rect6.rotate(120);
    rect6.translate(trPoint2);

    Point point(midPoint.getX(),midPoint.getY());
    circle.setRadius(width/3);
    circle.setPoint(point);
}

//Method untuk mewarnai pattern dengan warna default
void Flower::setDefaultColor()
{
    this->color1 = LIGHTBLUE;
    this->color2 = LIGHTGREEN;
    this->color3 = WHITE;
    rect.setColor(color3);
    rect2.setColor(color2);
    rect3.setColor(color1);
    rect4.setColor(color3);
    rect5.setColor(color2);
    rect6.setColor(color1);
    circle.setColor(color3);
}
