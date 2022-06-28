//****** Pattern printing:- *
//                          **
//                          ***
//                          ****
//                          *****
//                          ****
//                          ***
//                          **
//                          *
#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("\n");
        j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        i++;
    }
    i = 1;
    while (i <= n) {
        printf("\n");
        j = n - 1;
        while (j >= i) {
            printf("*");
            j--;
        }
        i++;
    }
    return 0;
}
