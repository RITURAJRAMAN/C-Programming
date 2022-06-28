// Fibonacci Series
#include <stdio.h>

int main() {
    int a = 0, b = 1, n, sum = 0;
    printf("Enter a Limitation: ");
    scanf("%d", &n);
    while (sum <= n) {
        printf("%d\n", sum);
        a = b;
        b = sum;
        sum = a + b;
    }
    return 0;
}
