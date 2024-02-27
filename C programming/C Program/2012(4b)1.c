#include<stdio.h>

void main() {
    int i, flag = 2;

    for(i=50;i>=0;i=i-2){
        if (flag) {
            printf("%d, ",-i);
        } else {
            printf("%d, ",i);
        }
        flag = !flag;
    }
    return 0;
}
