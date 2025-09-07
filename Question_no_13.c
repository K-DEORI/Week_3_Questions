#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[100], n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Simple bubble sort
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int *p = &arr[j], *q = &arr[j + 1];
                swap(p, q);
            }

    // Swap 2nd smallest and 2nd largest
    if (n >= 4)
        swap(&arr[1], &arr[n - 2]);

    printf("Array after interchange:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}