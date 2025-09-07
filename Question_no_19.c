#include <stdio.h>

int isLowerTriangular(int a[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][j] != 0)
                return 0;
    return 1;
}

int main() {
    int a[10][10], n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    if (isLowerTriangular(a, n))
        printf("Matrix is Lower Triangular\n");
    else
        printf("Matrix is NOT Lower Triangular\n");

    return 0;
}
