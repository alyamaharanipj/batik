#ifndef SQUARE_H
#define SQUARE_H

#include <Quadrilateral.h>

class Square : public Quadrilateral
{
    private:
       int side;

    public:
       Square(int side, Point point);
       Square();
       int getSide();
       void setSide(int side);
       void setCorner();
};

#endif // SQUARE_H
