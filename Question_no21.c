#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int n, m, i, j;
    int X = 2, Y = 3;

    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            C[i][j] = X * A[i][j] + Y * B[i][j];

    printf("Result (2A + 3B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
