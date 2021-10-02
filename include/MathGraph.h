#ifndef MATHGRAPH_H
#define MATHGRAPH_H

#include <Point.h>

class MathGraph
{
    public:
        MathGraph();
        void drawPolynomGraph();
        void drawParabolaGraph();
        void dilate(float dilatationFactor);
        float getDilatationFactor();
        void translate(Point translatePoint);
        Point getTranslatePoint();

    protected:

    private:
        float dilatationFactor;
        Point translatePoint;
        Point mainPoint;
        int scale;
};

#endif // MATHGRAPH_H
