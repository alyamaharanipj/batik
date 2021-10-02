#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include <Triangle.h>

class RightTriangle : public Triangle
{
    private:
       int height;
       int bottomSide;

    public:
       RightTriangle(int height, int bottomSide, Point point);
       int getHeight();
       void setHeight(int height);
       int getBottomSide();
       void setBottomSide(int bottomSide);
       void setCorner();
};

#endif // RIGHTTRIANGLE_H
