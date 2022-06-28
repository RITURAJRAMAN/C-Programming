// Insert a number in an array
#include <stdio.h>

int main() {
    int a[10], i, pos, val;
    for (i = 0; i <= 9; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    printf("Enter index to insert: ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    for (i = 8; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = val;
    printf("\nArray afer insertion: ");
    for (i = 0; i < 10; i++)
        printf("\n%d", a[i]);
    return 0;
}
