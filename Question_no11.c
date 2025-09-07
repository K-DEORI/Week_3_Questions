#include <stdio.h>

int main() {
    int a[10][10], odd[100], even[100];
    int m, n, i, j, o = 0, e = 0;

    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] % 2 == 0)
                even[e++] = a[i][j];
            else
                odd[o++] = a[i][j];
        }

    printf("Odd elements:\n");
    for (i = 0; i < o; i++)
        printf("%d ", odd[i]);

    printf("\nEven elements:\n");
    for (i = 0; i < e; i++)
        printf("%d ", even[i]);

    return 0;
}
