#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int (*p)[3]; // pointer to array of 3 ints
    p = a;

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", (*(p + i) + j));

    printf("Matrix using pointer:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", *(*(p + i) + j));
        printf("\n");
    }

    return 0;
}
