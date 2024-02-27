#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrA[50],i,m,n,arrB[20],loc;


    printf("enter your arrA size: ");
    scanf("%d",&m);

    printf("enter your arrA\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arrA[i]);
    }

    printf("Aarr are\n");

     for(i=0;i<m;i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");

    printf("enter the size of element to insert: ");
    scanf("%d",&n);

    printf("enter new location to insert new elements");
    scanf("%d",&loc);

    // to shift the element before inserting

    for(i = m-1;i>=loc;i--)
    {
        arrA[i+n]=arrA[i];
    }


    printf("enter your new array from location %d\n",loc);
    // to store

    for(i = 0;i<n;i++)
    {
        arrA[loc+i]= arrB[i];
        printf("array at %d\n",loc+i);
        scanf("%d",&arrA[loc+i]);

    }

    // to print

     printf("Modified of arr are\n");

     for(i=0;i<m+n;i++)
    {
        printf("%d ",arrA[i]);
    }


    return 0;
}
