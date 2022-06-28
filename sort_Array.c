// sort in Ascending and Descending order
#include <stdio.h>

int main() {
    int n, i, j, t;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
//  or (i = 0; i < n - 1; i++)
    for (j = i + 1; j < n; j++)
        if (a[i] > a[j]) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    printf("\nArray in Ascending order: ");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\nArray in decending order: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d\t", a[i]);
    return 0;
}
