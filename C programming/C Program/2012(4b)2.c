#include <stdio.h>

int main(void) {
    for (int i = 50; i >= 4; i -= 4){
        printf("-%d, %d, ", i, i - 2);
    }
    printf("0\n");
}
