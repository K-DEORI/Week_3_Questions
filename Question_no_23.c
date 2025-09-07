#include <stdio.h>

int main() {
    int num, digits[20], count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digits[count++] = num % 10;
        num /= 10;
    }

    printf("Digits: ");
    for (int i = count - 1; i >= 0; i--)
        printf("%d ", digits[i]);

    return 0;
}
