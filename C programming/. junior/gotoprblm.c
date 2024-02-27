#include<stdio.h>
int main(){
int num = 4,i,y,x = 30;
for(y=1; y<=num; y++){
   goto (x,y+1);
   for(i=0; i<=y; i++)
         pritnf("%3d",abs(i));
         x = x-3;
   }
}

