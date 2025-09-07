#include <stdio.h>

int main() {
    int a[10][10], n, i, j, product = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            product *= a[i][j];

    printf("Product of elements above diagonal = %d\n", product);
    return 0;
}
