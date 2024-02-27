#include<stdio.h>
int floatInteger(float n);
int main(){
    float value;
    scanf("%f",&value);
    printf(" %d ", floatInteger(value));
    return 0;
}

int floatInteger(float n){
    int t = (int)n;
    if(n == t){
        return 0;
    }else{
        return 1;
    }
}

