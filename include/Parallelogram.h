#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <Quadrilateral.h>

class Parallelogram : public Quadrilateral {
    private:
       int height;
       int side;
       int hypotenuse;

    public:
       Parallelogram(int height, int side, int hypotenuse, Point point);
       int getHeight();
       void setHeight(int height);
       int getHypotenuse();
       void setHypotenuse(int hypotenuse);
       int getSide();
       void setSide(int topSide);
       void setCorner();
};

#endif // PARALLELOGRAM_H
