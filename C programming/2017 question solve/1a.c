#include<stdio.h>

int main(){
    int i=5;
    float f=7.5;
    char c='a';
    int res = i + ((int) f);
    printf(" %d ", c);
    printf(" %d ", i+c);
    printf(" %f ", i+c);
    printf(" %d ", i+f);
    printf(" %f ", i+f);

    printf(" int : %d",res);

return 0;
}
