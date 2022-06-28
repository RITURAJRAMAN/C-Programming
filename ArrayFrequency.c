// Count frequency of number
#include <stdio.h>

int main() {
    int n, i, key, freq = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nEnter number to check: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key)
            freq++;
    printf("Frequency of %d is %d", key, freq);
    return 0;
}
