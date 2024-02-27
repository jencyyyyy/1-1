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
