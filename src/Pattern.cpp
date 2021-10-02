#include "Pattern.h"

//Constructor
Pattern::Pattern(Point midPoint, int side)
{
    this->side = side;
    this->midPoint.setXY(midPoint.getX(),midPoint.getY());
    init();
}

//Setter dan getter
void Pattern::setSide(int side)
{
    this->side = side;
}

int Pattern::getSide()
{
    return side;
}

void Pattern::setColor(int color)
{
    this->color = color;
    square.setColor(color);
    stroke.setColor(color);
    stroke2.setColor(color);
    stroke3.setColor(color);
    stroke4.setColor(color);
}

int Pattern::getColor()
{
    return color;
}

void Pattern::setPoint(Point midPoint)
{
    this->midPoint.setXY(midPoint.getX(),midPoint.getY());
}

Point Pattern::getMidpoint()
{
    return midPoint;
}

//Method untuk rotasi pattern
void Pattern::rotate(float angle)
{
    square.translate(trPoint);
    square.rotate(angle);
    square.translate(trPoint2);

    stroke.translate(trPoint);
    stroke.rotate(angle);
    stroke.translate(trPoint2);

    stroke2.translate(trPoint);
    stroke2.rotate(angle);
    stroke2.translate(trPoint2);

    stroke3.translate(trPoint);
    stroke3.rotate(angle);
    stroke3.translate(trPoint2);

    stroke4.translate(trPoint);
    stroke4.rotate(angle);
    stroke4.translate(trPoint2);
}

//Method untuk translasi pattern
void Pattern::translate(Point translationPoint)
{
    square.translate(translationPoint);
    stroke.translate(translationPoint);
    stroke2.translate(translationPoint);
    stroke3.translate(translationPoint);
    stroke4.translate(translationPoint);
}

//Method untuk scaling pattern
void Pattern::scale(float scaleXFactor, float scaleYFactor)
{
    square.translate(trPoint);
    square.scale(scaleXFactor, scaleYFactor);
    square.translate(trPoint2);

    stroke.translate(trPoint);
    stroke.scale(scaleXFactor, scaleYFactor);
    stroke.translate(trPoint2);

    stroke2.translate(trPoint);
    stroke2.scale(scaleXFactor, scaleYFactor);
    stroke2.translate(trPoint2);

    stroke3.translate(trPoint);
    stroke3.scale(scaleXFactor, scaleYFactor);
    stroke3.translate(trPoint2);

    stroke4.translate(trPoint);
    stroke4.scale(scaleXFactor, scaleYFactor);
    stroke4.translate(trPoint2);
}

//Method untuk menggambar pattern
void Pattern::draw()
{
    square.draw();
    stroke.draw();
    stroke2.draw();
    stroke3.draw();
    stroke4.draw();
}

//Inisialisasi komponen pattern
void Pattern::init()
{
    trPoint.setXY(midPoint.getX()*-1,midPoint.getY()*-1);
    trPoint2.setXY(midPoint.getX(),midPoint.getY());

    square.setSide(side);
    square.setPoint(midPoint);
    square.setCorner();

    point.setXY(midPoint.getX()-(side/4),midPoint.getY());
    point2.setXY(midPoint.getX()-(side/4),midPoint.getY()-(side/2));
    stroke.setStartingPoint(point);
    stroke.setEndingPoint(point2);

    stroke2.setStartingPoint(point);
    stroke2.setEndingPoint(point2);
    stroke2.translate(trPoint);
    stroke2.rotate(90);
    stroke2.translate(trPoint2);

    stroke3.setStartingPoint(stroke2.getStartingPoint());
    stroke3.setEndingPoint(stroke2.getEndingPoint());
    stroke3.translate(trPoint);
    stroke3.rotate(90);
    stroke3.translate(trPoint2);

    stroke4.setStartingPoint(stroke3.getStartingPoint());
    stroke4.setEndingPoint(stroke3.getEndingPoint());
    stroke4.translate(trPoint);
    stroke4.rotate(90);
    stroke4.translate(trPoint2);
}

