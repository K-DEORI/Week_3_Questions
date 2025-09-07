#include <stdio.h>

int main() {
    int arr[100], n, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n > 2) {
        temp = arr[1];
        arr[1] = arr[n - 2];
        arr[n - 2] = temp;
    }

    printf("Array after interchange:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
