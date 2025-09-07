#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i] * arr[i];
    }

    printf("Sum of squares = %d\n", sum);

    return 0;
}
