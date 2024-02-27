#include<stdio.h>

main()
{
int x,y;
scanf("%d%d",&x,&y);
switch(x)
    {
        case (x<0):printf("x is positive");break;
        case (x>0):printf("x is negative");
    }
x=f1(y);
printf("Final value of = %d\n",x);
}

void f1(int y)
{
    y= y*y;
    return y;
}
