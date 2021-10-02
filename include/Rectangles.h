#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <Quadrilateral.h>

// The class Rectangle is a subclass of Shape
class Rectangles : public Quadrilateral {
private:
   int length;
   int width;

public:
   Rectangles(int length, int width, Point point);
   Rectangles();
   int getLength();
   void setLength(int length);
   int getWidth();
   void setWidth(int width);
   void setCorner();
   void fill();
};

#endif // RECTANGLE_H
