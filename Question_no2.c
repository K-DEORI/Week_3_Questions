#include <stdio.h>

int main() {
    int arr[100], i, j;

    printf("Enter 100 integers:\n");
    for (i = 0; i < 100; i++)
        scanf("%d", &arr[i]);

    printf("Pairs with sum 50:\n");
    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (arr[i] + arr[j] == 50) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
