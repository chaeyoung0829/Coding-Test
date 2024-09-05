#include <stdio.h>

int main() {
    int i, j;

    // 구구단 출력
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n"); // 각 단마다 줄바꿈
    }

    return 0;
}
