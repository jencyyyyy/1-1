#include<stdio.h>
#define MAX 10

int main()
{
    int array[MAX][MAX],i, j, r, c;

    printf("Enter row and column number:\n");
    scanf("%d %d", &r, &c);

    printf("Enter %d X %d elements:\n", r, c);
    for(i = 0; i <r; i++)
    {
        for(j=0;j<c; j++)
        {
            printf("Enter array[%d][%d]: ",i+1,j+1);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Your entered 2D matrix of %dX%d elements:\n", r, c);
     for(i=0;i<r; i++)
    {
        for(j=0;j<c; j++)
        {
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
