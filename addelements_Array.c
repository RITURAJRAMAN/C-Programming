// Add the elements of array
#include <stdio.h>

int main() {
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Enter value at (%d %d) index: ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\n2D elements are:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    int sum = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum += a[i][j];
    printf("\nSum: %d", sum);
    return 0;
}
