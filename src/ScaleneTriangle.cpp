#include "ScaleneTriangle.h"
#include <math.h>
#include <graphics.h>

ScaleneTriangle::ScaleneTriangle(int sideA, int sideB, int sideC, Point point){
    this->sideA = sideA;
    this->sideB = sideB;;
    this->sideC = sideC;
    this->point.setXY(point.getX(), point.getY());
    setCorner();
}

void ScaleneTriangle::setCorner()
{
    leftCorner.setXY(point.getX(), point.getY() - sideA);
    rightCorner.setXY(point.getX(), point.getY());
    topCorner.setXY(point.getX() + sideB, point.getY() - sideB);
}

void ScaleneTriangle::setSideA(int sideA)
{
    this->sideA = sideA;
}

int ScaleneTriangle::getSideA()
{
    return sideA;
}

void ScaleneTriangle::setSideB(int sideB)
{
    this->sideB = sideB;
}

int ScaleneTriangle::getSideC()
{
    return sideC;
}

void ScaleneTriangle::setSideC(int sideC)
{
    this->sideC = sideC;
}

int ScaleneTriangle::getSideB()
{
    return sideB;
}
