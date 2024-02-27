#include<stdio.h>
main()
{
    int i;
    int k = -1;
    for(i=50;i>=2;i=i-2)
        {
            if (k == 1)
            {
             printf("%d, ", i);
            }
            else
            {
                printf("-%d, ", i);
            }
            k *= -1;
        }
        printf("0\n");

    return 0;
}
