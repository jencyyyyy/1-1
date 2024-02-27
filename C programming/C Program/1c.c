#include<stdio.h>

int main()

{
    int i =5;
    float f=7.5;
    char c='a';

    printf("%d\n",i+c);
    printf("%d\n",i+f);

    float num=25.5;

    num=((int)num)%2;

    printf("%f\n",num);


    return 0;
}

