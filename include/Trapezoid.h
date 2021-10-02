#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <Quadrilateral.h>

class Trapezoid : public Quadrilateral
{
    private:
       int height;
       int topSide;
       int hypotenuse;

    public:
       Trapezoid(int height, int topSide, int hypotenuse, Point point);
       int getHeight();
       void setHeight(int height);
       int getHypotenuse();
       void setHypotenuse(int hypotenuse);
       int getTopSide();
       void setTopSide(int topSide);
       void setCorner();
};

#endif // TRAPEZOID_H
