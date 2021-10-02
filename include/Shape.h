#ifndef SHAPE_H
#define SHAPE_H

#include <Point.h>
#include <../DataType.h>

class Shape {
    protected:
        int color;   // Protected data member
        LineType type;
        int pxSize;
        Point point;
        Point translatePoint;
        double angle;
        float scaleXFactor;
        float scaleYFactor;
        int scale;
        int noneColor;

    public:
       Shape();  // Constructor
       int getColor();            // Getter
       void setColor(int color);  // Setter
       LineType getType();
       void setType(LineType type);
       int getPxSize();
       void setPxSize(int pxSize);
       Point getPoint();
       void setPoint(Point point);
       void setCorner();
       void setNoneColor();
};

#endif // SHAPE_H
