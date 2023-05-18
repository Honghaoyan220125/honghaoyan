#include <stdio.h>

int main() {
    int i, j, k;

    printf("三位水仙花数有：\n");
    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            for (k = 0; k <= 9; k++) {
                if (i*i*i + j*j*j + k*k*k == i*100 + j*10 + k) {
                    printf("%d\n", i*100 + j*10 + k);
                }
            }
        }
    }

    printf("四位水仙花数有：\n");
    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            for (k = 0; k <= 9; k++) {
                if (i*i*i*i + j*j*j*j + k*k*k*k == i*1000 + j*100 + k*10 + k) {
                    printf("%d\n", i*1000 + j*100 + k*10 + k);
                }
            }
        }
    }

    return 0;
}
