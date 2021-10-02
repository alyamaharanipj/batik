#include "Ellipses.h"
#include <graphics.h>
#include <math.h>
using namespace std;

Ellipses::Ellipses(int rx, int ry, Point point)
{
    this->rx = rx;
    this->ry = ry;
    this->point.setXY(point.getX(), point.getY());
}

int Ellipses::getRx()
{
    return rx;
}

void Ellipses::setRx(int rx)
{
    this->rx = rx;
}

int Ellipses::getRy()
{
    return ry;
}

void Ellipses::setRy(int ry)
{
    this->ry = ry;
}

void Ellipses::draw(){
    int xc = point.getX();
    int yc = point.getY();
    for(int i = 0; i < pxSize; i++)
    {
        Point point(xc, yc);
        midPoint(rx-1, ry-1, point);
    }
}

void Ellipses::midPoint(int rx, int ry, Point point)
{
    int xc = point.getX();
    int yc = point.getY();
    int trX = translatePoint.getX();
    int trY = translatePoint.getY();
    float dx, dy, d1, d2, x, y;
    x = 0;
    y = ry;

    // Initial decision parameter of region 1
    d1 = (ry * ry) - (rx * rx * ry) +
                     (0.25 * rx * rx);
    dx = 2 * ry * ry * x;
    dy = 2 * rx * rx * y;

    // For region 1
    while (dx < dy)
    {
        int x1 = ((x + xc + trX) * cos(angle)) - ((y + yc + trY) * sin(angle));
        int y1 = ((y + yc + trY) * cos(angle)) + ((x + xc + trX) * sin(angle));
        int x2 = ((-x + xc + trX) * cos(angle)) - ((y + yc + trY) * sin(angle));
        int y2 = ((y + yc + trY) * cos(angle)) + ((-x + xc + trX) * sin(angle));
        int x3 = ((x + xc + trX) * cos(angle)) - ((-y + yc + trY) * sin(angle));
        int y3 = ((-y + yc + trY) * cos(angle)) + ((x + xc + trX) * sin(angle));
        int x4 = ((-x + xc + trX) * cos(angle)) - ((-y + yc + trY) * sin(angle));
        int y4 = ((-y + yc + trY) * cos(angle)) + ((-x + xc + trX) * sin(angle));

        int x1Screen = x1 + getmaxx()/2;
        int y1Screen = -1 * y1 + getmaxy()/2;
        int x2Screen = x2 + getmaxx()/2;
        int x3Screen = x3 + getmaxx()/2;
        int y2Screen = -1 * y2 + getmaxy()/2;
        int y3Screen = -1 * y3 + getmaxy()/2;
        int x4Screen = x4 + getmaxx()/2;
        int y4Screen = -1 * y4 + getmaxy()/2;
        // Print points based on 4-way symmetry
        putpixel(x1Screen, y1Screen, color);
        putpixel(x2Screen, y2Screen, color);
        putpixel(x3Screen, y3Screen, color);
        putpixel(x4Screen, y4Screen, color);

        // Checking and updating value of
        // decision parameter based on algorithm
        if (d1 < 0)
        {
            x++;
            dx = dx + (2 * ry * ry);
            d1 = d1 + dx + (ry * ry);
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d1 = d1 + dx - dy + (ry * ry);
        }
    }

    // Decision parameter of region 2
    d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5))) +
         ((rx * rx) * ((y - 1) * (y - 1))) -
          (rx * rx * ry * ry);

    // Plotting points of region 2
    while (y >= 0)
    {
        int x1 = ((x + xc + trX) * cos(angle)) - ((y + yc + trY) * sin(angle));
        int y1 = ((y + yc + trY) * cos(angle)) + ((x + xc + trX) * sin(angle));
        int x2 = ((-x + xc + trX) * cos(angle)) - ((y + yc + trY) * sin(angle));
        int y2 = ((y + yc + trY) * cos(angle)) + ((-x + xc + trX) * sin(angle));
        int x3 = ((x + xc + trX) * cos(angle)) - ((-y + yc + trY) * sin(angle));
        int y3 = ((-y + yc + trY) * cos(angle)) + ((x + xc + trX) * sin(angle));
        int x4 = ((-x + xc + trX) * cos(angle)) - ((-y + yc + trY) * sin(angle));
        int y4 = ((-y + yc + trY) * cos(angle)) + ((-x + xc + trX) * sin(angle));
        int x1Screen = x1 + getmaxx()/2;
        int y1Screen = -1 * y1 + getmaxy()/2;
        int x2Screen = x2 + getmaxx()/2;
        int x3Screen = x3 + getmaxx()/2;
        int y2Screen = -1 * y2 + getmaxy()/2;
        int y3Screen = -1 * y3 + getmaxy()/2;
        int x4Screen = x4 + getmaxx()/2;
        int y4Screen = -1 * y4 + getmaxy()/2;
        // Print points based on 4-way symmetry
        putpixel(x1Screen, y1Screen, color);
        putpixel(x2Screen, y2Screen, color);
        putpixel(x3Screen, y3Screen, color);
        putpixel(x4Screen, y4Screen, color);

        // Checking and updating parameter
        // value based on algorithm
        if (d2 > 0)
        {
            y--;
            dy = dy - (2 * rx * rx);
            d2 = d2 + (rx * rx) - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d2 = d2 + dx - dy + (rx * rx);
        }
    }
}

void Ellipses::fill(){
    int xc = point.getX();
    int yc = point.getY();
    int rxTemp = rx;
    int ryTemp = ry;
    for(int i = 0; i < rx;i++)
    {
        rxTemp--;
        ryTemp--;
        Point point(xc - 1, yc - 1);
        midPoint(rxTemp, ryTemp, point);
    }
}

void Ellipses::rotate(double angle) {
    this->angle = angle* (M_PI / 180);
}

void Ellipses::translate(Point translatePoint) {
    this->translatePoint.setXY(translatePoint.getX(),translatePoint.getY());
}

void Ellipses::scale(float scaleXfactor, float scaleYfactor) {
    this->rx = rx*scaleXfactor;
    this->ry = ry*scaleYfactor;
}
