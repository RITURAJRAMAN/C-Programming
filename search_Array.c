// Search a number in Array
#include <stdio.h>

int main() {
    int a[3][3], i, j, key;
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
    printf("\n\nEnter number to search: ");
    scanf("%d", &key);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (a[i][j] == key)
                printf("Number found at %d %d index.", i, j);
            else
                printf("Number not found.");
    return 0;
}
