#include <iostream>
#include <graphics.h>
#include <Stroke.h>
#include <Util.h>
#include <Ellipses.h>
#include <Pattern.h>
#include <Flower.h>
using namespace std;

//Method untuk menggambar Pattern
void drawCrest()
{
    //Konstruksi objek objek pattern
    Point point(20,0);
    Point point2(-20,0);
    Point point3(0,-20);
    Point point4(0,20);

    Pattern pattern(point,4);
    pattern.setColor(LIGHTBLUE);

    Circle circ(point,10);

    Pattern pattern2(point,8);
    pattern2.setColor(LIGHTGREEN);

    Pattern pattern3(point2,4);
    pattern3.setColor(LIGHTGREEN);

    Pattern pattern4(point2,8);
    pattern4.setColor(LIGHTBLUE);

    Pattern pattern5(point3,4);
    pattern5.setColor(LIGHTBLUE);

    Pattern pattern6(point3,8);
    pattern6.setColor(LIGHTGREEN);

    Pattern pattern7(point4,4);
    pattern7.setColor(LIGHTGREEN);

    Pattern pattern8(point4,8);
    pattern8.setColor(LIGHTBLUE);

    Point flowerPoint(0,0);
    Flower flower(flowerPoint,2,15);

    flowerPoint.setXY(-20,20);
    Flower flower2(flowerPoint,2,15);

    flowerPoint.setXY(20,-20);
    Flower flower3(flowerPoint,2,15);

    flowerPoint.setXY(-20,-20);
    Flower flower4(flowerPoint,2,15);

    flowerPoint.setXY(20,20);
    Flower flower5(flowerPoint,2,15);

    int i = 0;
    int page = 0;
    float angle = 5;
    Point trPoint;
    delay(500);
    //Animasi pada pattern
    while(1)
    {
        i++;
        //Translasi dan scaling pada pattern
        if(i%4<2){
            trPoint.setXY(1,0);
            pattern.scale(2,2);
            pattern2.scale(2,2);
            pattern3.scale(2,2);
            pattern4.scale(2,2);
            pattern5.scale(2,2);
            pattern6.scale(2,2);
            pattern7.scale(2,2);
            pattern8.scale(2,2);
            flower.translate(trPoint);
            flower2.translate(trPoint);
            flower3.translate(trPoint);
            flower4.translate(trPoint);
            flower5.translate(trPoint);
        }else{
            trPoint.setXY(-1,0);
            pattern.scale(0.5, 0.5);
            pattern2.scale(0.5, 0.5);
            pattern3.scale(0.5, 0.5);
            pattern4.scale(0.5, 0.5);
            pattern5.scale(0.5, 0.5);
            pattern6.scale(0.5, 0.5);
            pattern7.scale(0.5, 0.5);
            pattern8.scale(0.5, 0.5);
            flower.translate(trPoint);
            flower2.translate(trPoint);
            flower3.translate(trPoint);
            flower4.translate(trPoint);
            flower5.translate(trPoint);
        }

        //Rotasi pada pattern

        flower.rotate(angle);
        flower.draw();

        flower2.rotate(angle);
        flower2.draw();

        flower3.rotate(angle);
        flower3.draw();

        flower4.rotate(angle);
        flower4.draw();

        flower5.rotate(angle);
        flower5.draw();

        pattern.rotate(angle);
        pattern.draw();

        pattern2.rotate(angle);
        pattern2.draw();

        pattern3.rotate(angle);
        pattern3.draw();

        pattern4.rotate(angle);
        pattern4.draw();

        pattern5.rotate(angle);
        pattern5.draw();

        pattern6.rotate(angle);
        pattern6.draw();

        pattern7.rotate(angle);
        pattern7.draw();

        pattern8.rotate(angle);
        pattern8.draw();

        delay(100);

        // Page untuk menggambar dan page yang ditampilkan
        setactivepage(page);
        setvisualpage(1 - page);
        page = 1 - page;
        cleardevice();
    }
}

// Menggambat pattern challenge
void drawChallenge()
{
    //Konstruksi objek - objek pattern
    //Pendeklarasian posisi pattern
    Point point(-30,-5);
    Point point2(-20,-15);
    Point point3(-10,-5);
    Point point4(-20,-25);
    Point point5(25,-5);
    Point point6(25,-15);
    Point point7(15,-25);
    Point point8(35,-25);

    Pattern pattern(point,4);
    pattern.setColor(LIGHTBLUE);

    Circle circ(point,10);

    Pattern pattern2(point,8);
    pattern2.setColor(LIGHTGREEN);

    Pattern pattern3(point2,4);
    pattern3.setColor(LIGHTGREEN);

    Pattern pattern4(point2,8);
    pattern4.setColor(LIGHTBLUE);

    Pattern pattern5(point3,4);
    pattern5.setColor(LIGHTBLUE);

    Pattern pattern6(point3,8);
    pattern6.setColor(LIGHTGREEN);

    Pattern pattern7(point4,4);
    pattern7.setColor(LIGHTGREEN);

    Pattern pattern8(point4,8);
    pattern8.setColor(LIGHTBLUE);

    Pattern pattern9(point5,4);
    pattern9.setColor(LIGHTBLUE);

    Pattern pattern10(point5,8);
    pattern10.setColor(LIGHTGREEN);

    Pattern pattern11(point6,4);
    pattern11.setColor(LIGHTGREEN);

    Pattern pattern12(point6,8);
    pattern12.setColor(LIGHTBLUE);

    Pattern pattern13(point7,4);
    pattern13.setColor(LIGHTBLUE);

    Pattern pattern14(point7,8);
    pattern14.setColor(LIGHTGREEN);

    Pattern pattern15(point8,4);
    pattern15.setColor(LIGHTGREEN);

    Pattern pattern16(point8,8);
    pattern16.setColor(LIGHTBLUE);

    Point flowerPoint(0,0);
    Flower flower(flowerPoint,2,10);

    flowerPoint.setXY(-20,30);
    Flower flower2(flowerPoint,2,10);

    flowerPoint.setXY(-20,20);
    Flower flower10(flowerPoint,2,10);

    flowerPoint.setXY(-30,10);
    Flower flower11(flowerPoint,2,10);

    flowerPoint.setXY(-10,10);
    Flower flower12(flowerPoint,2,10);

    flowerPoint.setXY(20,-20);
    Flower flower3(flowerPoint,2,10);

    flowerPoint.setXY(-20,0);
    Flower flower4(flowerPoint,2,10);

    flowerPoint.setXY(20,30);
    Flower flower5(flowerPoint,2,10);

    flowerPoint.setXY(20,20);
    Flower flower7(flowerPoint,2,10);

    flowerPoint.setXY(20,10);
    Flower flower8(flowerPoint,2,10);

    flowerPoint.setXY(30,10);
    Flower flower9(flowerPoint,2,10);

    flowerPoint.setXY(-30,0);
    Flower flower6(flowerPoint,2,10);

    //Deklarasi variabel
    int page = 0;
    float angle = 5;
    Point trPoint;
    delay(500);
    //Animasi pada pattern
    while(1)
    {
        //Rotasi pada pattern
        flower2.rotate(angle);
        flower2.draw();

        flower5.rotate(angle);
        flower5.draw();

        flower7.rotate(angle);
        flower7.draw();

        flower8.rotate(angle);
        flower8.draw();

        flower9.rotate(angle);
        flower9.draw();

        flower10.rotate(angle);
        flower10.draw();

        flower11.rotate(angle);
        flower11.draw();

        flower12.rotate(angle);
        flower12.draw();

        pattern.rotate(angle);
        pattern.draw();

        pattern2.rotate(angle);
        pattern2.draw();

        pattern3.rotate(angle);
        pattern3.draw();

        pattern4.rotate(angle);
        pattern4.draw();

        pattern5.rotate(angle);
        pattern5.draw();

        pattern6.rotate(angle);
        pattern6.draw();

        pattern7.rotate(angle);
        pattern7.draw();

        pattern8.rotate(angle);
        pattern8.draw();

        pattern9.rotate(angle);
        pattern9.draw();

        pattern10.rotate(angle);
        pattern10.draw();

        pattern11.rotate(angle);
        pattern11.draw();

        pattern12.rotate(angle);
        pattern12.draw();

        pattern13.rotate(angle);
        pattern13.draw();

        pattern14.rotate(angle);
        pattern14.draw();

        pattern15.rotate(angle);
        pattern15.draw();

        pattern16.rotate(angle);
        pattern16.draw();

        delay(100);

        setactivepage(page);
        setvisualpage(1 - page);
        page = 1 - page;
        cleardevice();
    }
}

int main () {
    Util util;
    util.createWindow();
    util.createMenu();
    return 0;
}
