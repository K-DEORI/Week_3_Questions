#include <stdio.h>

int main() {
    int a[10][10], m, n, i, j, count = 0;

    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0)
                count++;
        }

    printf("Total non-zero elements = %d\n", count);
    return 0;
}
