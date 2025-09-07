#include <stdio.h>

int main() {
    int a[10][10], m, n, i, j, sum = 0;
    float mean;

    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    mean = (float)sum / (m * n);

    printf("Sum = %d, Mean = %.2f\n", sum, mean);

    return 0;
}
