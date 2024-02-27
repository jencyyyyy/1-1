#include<stdio.h>
#define MAX 100
int main()
{
    int array[MAX],i,N;

    printf("Enter Array Size:\t");
    scanf("%d",&N);

    printf("Enter %d elements:\n",N);
    for(i=0;i<N;i++)
        scanf("%d",&array[i]);

    printf("You Entered:\n");
    for(i=0;i<N;i++)
        printf("%d\n",array[i]);

    return 0;
}
