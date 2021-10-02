#ifndef ELLIPSES_H
#define ELLIPSES_H

#include <Shape.h>

class Ellipses: public Shape
{
    private:
       int rx;
       int ry;

    public:
       Ellipses(int rx, int ry, Point point);

       int getRx();
       void setRx(int rx);
       void setRy(int ry);
       int getRy();
       void fill();
       void draw();
       void rotate(double angle);
       void translate(Point translationPoint);
       void scale(float scaleXFactor, float scaleYFactor);
       void midPoint(int rx, int ry, Point point);
};

#endif // ELLIPSES_H
