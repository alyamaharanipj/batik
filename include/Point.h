#ifndef POINT_H
#define POINT_H

class Point
{
    private:
        float x;
        float y;
        float xScreen;
        float yScreen;

    public:
        Point(float x, float y);
        Point();

        void setX(float x);
        void setY(float y);
        void setXY(float x, float y);

        float getX();
        float getY();
        float getXScreen();
        float getYScreen();

        void rotate(float angle);
        void translate(float xTranslate, float yTranslate);
        void scale(float scaleXFactor, float scaleYFactor);
        void reflect();
};

#endif // POINT_H
