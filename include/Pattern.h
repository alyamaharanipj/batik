#ifndef PATTERN_H
#define PATTERN_H

#include <Point.h>
#include <Square.h>
#include <Stroke.h>

class Pattern
{
    public:
        Pattern(Point midPoint, int side);
        void setSide(int side);
        int getSide();
        void setColor(int color);
        int getColor();
        void setPoint(Point midPoint);
        Point getMidpoint();
        void rotate(float angle);
        void translate(Point translationPoint);
        void scale(float scaleXFactor, float scaleYFactor);
        void draw();
        void init();

    private:
        int side;
        int color;
        Point midPoint;
        Point trPoint;
        Point trPoint2;
        Point point;
        Point point2;
        Square square;
        Stroke stroke;
        Stroke stroke2;
        Stroke stroke3;
        Stroke stroke4;
};

#endif // PATTERN_H
