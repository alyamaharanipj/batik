#ifndef CIRCLE_H
#define CIRCLE_H
#include<Shape.h>
#include <../DataType.h>

class Circle: public Shape
{
    private:
       int radius;

    public:
       Circle(Point midPoint, int radius);
       Circle();
       int getRadius();
       void setRadius(int radius);

       void fillCircle();
       void draw();
       void midPoint(int x_centre, int y_centre, int r);
       void drawQuarter();
        void rotate(double angle);
        void translate(Point translationPoint);
        void scale(float scaleFactor);
};

#endif // CIRCLE_H
