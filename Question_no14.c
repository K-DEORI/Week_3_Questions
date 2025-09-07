#include <stdio.h>

#define MAX 5

void readMatrix(int a[MAX][MAX][MAX], int p, int q, int r) {
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < r; k++)
                scanf("%d", &a[i][j][k]);
}

void displayMatrix(int a[MAX][MAX][MAX], int p, int q, int r) {
    for (int i = 0; i < p; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++)
                printf("%d ", a[i][j][k]);
            printf("\n");
        }
    }
}

int main() {
    int a[MAX][MAX][MAX], b[MAX][MAX][MAX], c[MAX][MAX][MAX];
    int p, q, r, choice;

    printf("Enter dimensions p q r: ");
    scanf("%d %d %d", &p, &q, &r);

    printf("Enter elements of 1st matrix:\n");
    readMatrix(a, p, q, r);
    printf("Enter elements of 2nd matrix:\n");
    readMatrix(b, p, q, r);

    do {
        printf("\nMenu:\n1. Display\n2. Sum\n3. Transpose (only last 2 dims)\n4. Product\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Matrix A:\n");
            displayMatrix(a, p, q, r);
            printf("Matrix B:\n");
            displayMatrix(b, p, q, r);
            break;
        case 2:
            for (int i = 0; i < p; i++)
                for (int j = 0; j < q; j++)
                    for (int k = 0; k < r; k++)
                        c[i][j][k] = a[i][j][k] + b[i][j][k];
            printf("Sum:\n");
            displayMatrix(c, p, q, r);
            break;
        case 3: // transpose q x r
            for (int i = 0; i < p; i++)
                for (int j = 0; j < q; j++)
                    for (int k = 0; k < r; k++)
                        c[i][k][j] = a[i][j][k];
            printf("Transpose of A (last 2 dims):\n");
            displayMatrix(c, p, r, q);
            break;
        case 4:
            for (int i = 0; i < p; i++)
                for (int j = 0; j < q; j++)
                    for (int k = 0; k < r; k++)
                        c[i][j][k] = a[i][j][k] * b[i][j][k];
            printf("Product:\n");
            displayMatrix(c, p, q, r);
            break;
        }
    } while (choice != 5);

    return 0;
}
