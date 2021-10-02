#ifndef FLOWER_H
#define FLOWER_H

#include <Point.h>
#include <Circle.h>
#include <Rectangles.h>

class Flower
{
    public:
        Flower(Point midPoint, int length, int width);
        void setLength(int length);
        int getLength();
        void setWidth(int width);
        int getWidth();
        void setColor(int color);
        int getColor();
        void setPoint(Point midPoint);
        Point getMidpoint();
        void rotate(float angle);
        void translate(Point translationPoint);
        void scale(float scaleXFactor, float scaleYFactor);
        void draw();
        void init();
        void setDefaultColor();

    private:
        int length;
        int width;
        int color1;
        int color2;
        int color3;
        Point midPoint;
        Point trPoint;
        Point trPoint2;
        Rectangles rect;
        Rectangles rect2;
        Rectangles rect3;
        Rectangles rect4;
        Rectangles rect5;
        Rectangles rect6;
        Circle circle;
};

#endif // FLOWER_H
