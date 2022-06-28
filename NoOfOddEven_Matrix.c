// Count total number of odd and even
#include <stdio.h>

int main() {
    int a[3][3], i, j, even, odd;
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
    even = odd = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            if (a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    printf("\n\nTotal odds are %d and evens are %d.", odd, even);
    return 0;
}
