#include<stdio.h>

int main()
{
    int input;

    printf("The days of week Starts with Saturday.\nEnter from 1 to 7:\t");
    scanf("%d", &input);

    switch(input)
    {
        case 1:
        printf("Saturday\n");
        break;
        case 2:
        printf("Sunday\n");
        break;
        case 3:
        printf("Monday\n");
        break;
        case 4:
        printf("Tuesday\n");
        break;
        case 5:
        printf("Wednesday\n");
        break;
        case 6:
        printf("Thursday\n");
        break;
        case 7:
        printf("Friday\n");
        break;
        default:
        printf("Wrong input\n");
        break;
    }

    return 0;
}

