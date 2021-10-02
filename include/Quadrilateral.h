#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <Shape.h>

class Quadrilateral : public Shape
{
    protected:
        Point topLeftCorner;
        Point topRightCorner;
        Point bottomLeftCorner;
        Point bottomRightCorner;
        int noneColor;

    public:
        Quadrilateral();

        void setTopLeftCorner(Point topLeftCorner);
        Point getTopLeftCorner();

        void setTopRightCorner(Point topRightCorner);
        Point getTopRightCorner();

        void setBottomLeftCorner(Point bottomLeftCorner);
        Point getBottomLeftCorner();

        void setBottomRightCorner(Point bottomRightCorner);
        Point getBottomRightCorner();

        void draw();

        void rotate(float angle);
        void translate(Point translationPoint);
        void scale(float scaleXFactor, float scaleYFactor);
};

#endif // QUADRILATERAL_H
