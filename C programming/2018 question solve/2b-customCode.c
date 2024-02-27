#include<stdio.h>
int decimalToBinary(int n);
int main(){

    int value=4;

    for(int i=3;i>=1;i--){
        printf("%03d\n",decimalToBinary(value));
        value = value>>1;
    }

    return 0;
}
int decimalToBinary(int n){
    long binarynum = 0;
    int remainder, temp = 1;

    while (n!=0)
    {
        remainder = n%2;
        n = n / 2;
        binarynum = binarynum + remainder*temp;
        temp = temp * 10;
    }
   return binarynum;
}

