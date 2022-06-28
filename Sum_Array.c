// Sum of array elements
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    printf("\nSum= %d", sum);
    return 0;
}
