#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c\\tc\\bgi");

    rectangle(20,20,80,80);
    getch();
    closegraph();
    return 0;
}
