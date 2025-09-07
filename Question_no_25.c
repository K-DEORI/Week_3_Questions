#include <stdio.h>

int main() {
    float arr[100];
    int n, pos, i;
    float val;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &arr[i]);

    printf("Enter position to insert (0-%d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%f", &val);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    printf("Updated array:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", arr[i]);

    return 0;
}
