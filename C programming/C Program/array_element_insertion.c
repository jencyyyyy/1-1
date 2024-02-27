#include<stdio.h>

int main()
{
    int array[50],n,i=0,key,loc;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d no of elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d",&key);
    printf("Enter location to insert: ");
    scanf("%d",&loc);
    for(i=n-1;i>=loc;i--)
    {
        array[i+1]=array[i];
    }
    array[loc]=key;

    return 0;
}
