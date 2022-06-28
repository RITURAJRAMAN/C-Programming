// Count no. of even and odd numbers
#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nno. of Even ones: %d\nno. of Odd ones: %d", even, odd);
    return 0;
}
