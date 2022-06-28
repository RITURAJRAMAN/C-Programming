// Sum of digits of number
#include <stdio.h>

int main() {

    int a, sum = 0;
    printf("Enter number: ");
    scanf("%d", &a);
    while (a > 0) {
        sum = sum + a % 10;
        a = a / 10;
    }
    printf("Sum= %d", sum);
    return 0;
}
