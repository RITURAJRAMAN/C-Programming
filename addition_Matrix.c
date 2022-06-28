// Addition of two matrix
#include <stdio.h>

int main() {
    int a[3][3], b[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Enter value of 1st matrix at (%d %d) index: ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Enter value of 2nd matrix at (%d %d) index: ", i, j);
            scanf("%d", &b[i][j]);
        }
    printf("\nFirst matrix is:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n\nSecond matrix is:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", b[i][j]);
    }
    printf("\n\nSum of Matrix is:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j] + b[i][j]);
    }
    return 0;
}
