#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <Shape.h>

class Triangle : public Shape
{
    protected:
        Point topCorner;
        Point leftCorner;
        Point rightCorner;

    public:
        Triangle();

        void setTopCorner(Point topCorner);
        Point getTopCorner();

        void setLeftCorner(Point leftCorner);
        Point getLeftCorner();

        void setRightCorner(Point rightCorner);
        Point getRightCorner();

        void draw();
        void rotate(double angle);
        void translate(Point translationPoint);
        void scale(float scaleXFactor, float scaleYFactor);
        void reflect();
};

#endif // TRIANGLE_H
