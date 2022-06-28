// program to Accept and display 3*3 matrix
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
    return 0;
}
