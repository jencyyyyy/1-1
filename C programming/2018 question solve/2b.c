#include<stdio.h>


int main(){

    int v[4][4];
    int n=3;
    for(int i=1;i<=n;++i)
    for(int j=1;j<=n;++j)
    v[i-1][j-1] = (i/j)*(j/i);

    for(int i=1; i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            printf("%d", v[i-1][j-1]);
        }
    printf("\n");
    }


    return 0;
}
