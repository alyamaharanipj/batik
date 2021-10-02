#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H


#include <Triangle.h>

class EquilateralTriangle : public Triangle
{
    private:
       int side;

    public:
       EquilateralTriangle(int side, Point point);
       int getSide();
       void setSide(int side);
       void setCorner();
};

#endif // EQUILATERALTRIANGLE_H
