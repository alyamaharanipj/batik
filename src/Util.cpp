#include <Util.h>
#include <graphics.h>
#include <iostream>
#include <../DataType.h>
Util::Util(){}

void Util::createWindow(){
    initwindow(1000, 800, "Batik");
}

void Util::createMenu(){
    int pil,type,pxSize;
    LineType lineType;
    while(1){
        printf("1. Crest\n");
        printf("2. Challenge \n");
        printf("Choose: ");
        scanf("%d",&pil);
        cleardevice();
        switch (pil)
        {
            case 1 : drawCrest();break;
            case 2 : drawChallenge();break;
            default : exit(1);
        }
        system("cls");
    }
}


