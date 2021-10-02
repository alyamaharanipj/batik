#ifndef SCALENETRIANGLE_H
#define SCALENETRIANGLE_H
#include <../DataType.h>

#include <Triangle.h>
class ScaleneTriangle: public Triangle
{
    private:
       int sideA;
       int sideB;
       int sideC;

    public:
       ScaleneTriangle(int sideA, int sideB, int sideC, Point point);
       int getSideA();
       void setSideA(int sideA);
        int getSideB();
       void setSideB(int sideB);
       int getSideC();
       void setSideC(int sideC);
       void setCorner();
};

#endif // SCALENETRIANGLE_H
