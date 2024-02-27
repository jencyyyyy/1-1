#include<stdio.h>

int x[5][5]= {
        {1,2,3,2,1},
		{2,0,1,2,2},
		{3,5,3,1,2},
		{4,7,20,3,2},
		{5,6,3,1,0}	};

int i,j,k,l,tmp,big,p;

void main(){
    for(i=0;i<=4;i++)
        for(j=0;j<=4;j++)
            for(k=j;k<=4;k++)
                for(l=k;l<=4;l++)
                    x[k][l] = x[k][l] + 1;

    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }
}
