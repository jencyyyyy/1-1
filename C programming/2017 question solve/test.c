#include<stdio.h>
int main(){

    int a[5]= {2,6,7,5,1};

    function(a);
 return 0;
}

void function(int array[]){

    for(int i=0;i<5;i++){
        printf(" %d", array[i]);
    }
}
