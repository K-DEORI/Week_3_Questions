#include <stdio.h>

void readSquare(int a[10][10], int n) {
    printf("Enter elements of %d x %d square:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}

void displaySquare(int a[10][10], int n) {
    printf("Square matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main() {
    int a[10][10], n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    readSquare(a, n);
    displaySquare(a, n);

    return 0;
}
