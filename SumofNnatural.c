// Sum of first n natural numbers
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum of %d terms: %d", n, sum);
    return 0;
}
