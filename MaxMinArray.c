// Maximum and Minimum in Array
#include <stdio.h>

int main() {
    int n, i, max, min;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    max = a[0];
    for (i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];
    printf("\nMaximum no. is %d.", max);
    min = a[0];
    for (i = 0; i < n; i++);
    if (a[i] < min)
        min = a[i];
    printf("\nMinimum no. is %d.", min);
    return 0;
}
