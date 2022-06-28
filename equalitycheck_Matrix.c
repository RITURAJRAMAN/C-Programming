// Check two matrix is equal or not
#include <stdio.h>

int main() {
    int a[3][3], b[3][3], i, j, flag = 0;
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
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (a[i][j] != b[i][j])
                flag = 1;
    if (flag == 0)
        printf("\n\nMatrix are equal.");
    else
        printf("\n\nThe matrix are not equal.");
    return 0;
}
