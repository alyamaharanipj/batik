#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <Quadrilateral.h>

class Rhombus : public Quadrilateral
{
    private:
       int diagonal;

    public:
       Rhombus(int diagonal, Point point);
       int getDiagonal();
       void setDiagonal(int diagonal);
       void setCorner();
};

#endif // RHOMBUS_H
