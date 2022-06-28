// Search a number in array
#include <stdio.h>

int main() {
    int n, i, key, flag = 0, pos;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nEnter number to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i + 1;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\nNumber found at %d position", pos);
    else
        printf("\nNumber not found");
    return 0;
}
