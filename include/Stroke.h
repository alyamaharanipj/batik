#ifndef STROKE_H
#define STROKE_H

#include <string>
#include "Point.h"
#include<../DataType.h>
using namespace std;
class Stroke
{
    private:
        Point startingPoint;
        Point endingPoint;
        int color;
        int pxSize;
        LineType type;
        Point translationPoint;

    public:
        Stroke(Point startingPoint, Point endingPoint);
        Stroke();
        void setColor(int color);
        int getColor();

        void setStartingPoint(Point startingPoint);
        void setEndingPoint(Point endingPoint);
        Point getStartingPoint();
        Point getEndingPoint();

        void setPxSize(int pxSize);
        int getPxSize();

        void setType(LineType type);
        LineType getLineType();

        void translate(Point point);
        void rotate(float angle);
        void scale(float scaleXFactor, float scaleYFactor);

        void DDA(int X0, int Y0, int X1, int Y1);
        void draw();
        int colorLine();
};

#endif // STROKE_H
