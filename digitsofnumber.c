// Print digits of a given number
#include <stdio.h>

int main() {
    int n, a[10], i, j, k;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; n != 0; i++) {
        k = n % 10;
        a[i] = k;
        n /= 10;
    }
    printf("The digits are: ");
    for (j = i - 1; j >= 0; j--)
        printf("%d\t", a[j]);
    return 0;
}
