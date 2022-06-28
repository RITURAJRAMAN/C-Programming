// Adding even numbers and multiplying odds
#include <stdio.h>

int main() {
    int a[3][3], i, j, sum = 0, product = 1;
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
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            if (a[i][j] % 2 == 0)
                sum += a[i][j];
            else
                product *= a[i][j];
        }
    printf("\nSum: %d\nProduct: %d", sum, product);
    return 0;
}
