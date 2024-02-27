#include<stdio.h>

int main()
{
    int input;

    printf("The days of week Starts with Saturday.\nEnter from 1 to 7:\t");
    scanf("%d", &input);

    if(input==1)
        printf("Saturday\n");
    else if(input==2)
        printf("Sunday\n");
    else if(input==3)
        printf("Monday\n");
    else if(input==4)
        printf("Tuesday\n");
    else if(input==5)
        printf("Wednesday\n");
    else if(input==6)
        printf("Thursday\n");
    else if(input==7)
        printf("Friday\n");
    else
        printf("Wrong input\n");

    return 0;
}
