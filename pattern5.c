//****** Pattern printing:-      *  ("%d",j) 1  ("%d",i) 1  ("%d",i+j) 2
//                        ("*") **          12          22            34
//                             ***         123         333           456
//                            ****        1234        4444          5678
//                           *****       12345       55555         678910
#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter no. of rows: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("\n");
        s = 1;
        while (s <= n - i) {
            printf(" ");
            s++;
        }
        j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        i++;
    }
    return 0;
}
