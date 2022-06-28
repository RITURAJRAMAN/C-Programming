//******Pattern printing:-*****       12345       11111
//                         ****        1234        2222
//                          ***         123         333
//                           **          12          44
//                      ("*") *  ("%d",j) 1  ("%d",i) 5
#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter no.of rows: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("\n");
        s = 1;
        while (s < i) {
            printf(" ");
            s++;
        }
        j = 1;
        while (j <= (n + 1) - i) {
            printf("*");
            j++;
        }
        i++;
    }
    return 0;
}
