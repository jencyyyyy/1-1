#include <stdio.h>

int main(void) {
    for (int i = 50; i >= 0; i -= 4){
        printf("-%d, %d%s", i, i - 2, i - 2 ? ", " : "\n");
    }
}
