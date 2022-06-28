// Read and display an Array
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
