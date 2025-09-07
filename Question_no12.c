#include <stdio.h>

int main() {
    float a[50], b[50], c[100];
    int n1, n2, i, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%f", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%f", &b[i]);

    // Merge
    for (i = 0; i < n1; i++)
        c[k++] = a[i];
    for (i = 0; i < n2; i++)
        c[k++] = b[i];

    printf("Merged array in reverse:\n");
    for (i = k - 1; i >= 0; i--)
        printf("%.2f ", c[i]);

    return 0;
}
