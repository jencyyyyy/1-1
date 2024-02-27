#include<stdio.h>

void printPattern() {
    int i, flag = true;

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
