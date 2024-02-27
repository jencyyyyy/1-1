#include<stdio.h>
#include<conio.h>

int x1, x2, y1, y2;
float z;
char a[10],b[10];
main()
{
scanf("%d%f",&y1,&z);
scanf("%c%c%c",&a[1],&a[2],&a[3]);
b[2]=a[2];
y2 = b[2]+a[1]+y1;
printf("%d%f%d%f%c",y1,z,y2,z,a[3]);
}

