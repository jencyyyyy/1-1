#include<stdio.h>
#include<conio.h>

int i,j,k,x,y,z=3;

main(){
    for(i=1;i<=z;i++){
        x=i;
        for(j=1;j<=z;j++){
            y=j;
            if(x!=y){
                for(k=65;k<65+z;k++)
                    printf("%c ",k);
            }else{
                for(k=64+z;k>=65;k--)
                    printf("%c ",k);
            }
        }
        printf("\n");
    }
getch();
}
