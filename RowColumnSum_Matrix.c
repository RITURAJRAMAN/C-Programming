// Find row and column sum
#include <stdio.h>

int main() {
    int a[3][3], i, j, sum;
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
    printf("\n");
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum += a[i][j];
        printf("\nSum of Row %d is %d.", i + 1, sum);
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum += a[j][i];
        printf("\nSum of Row %d is %d.", i + 1, sum);
    }
    return 0;
}
