//****** Pattern printing:-    *              1              1              5
//                      ("*") ***   ("%d",i) 222   ("%d",j) 123   ("%d",s) 444
//                           *****          33333          12345          33333
//                          *******        4444444        1234567        2222222
//                         *********      555555555      123456789      111111111
#include <stdio.h>

int main() {
    int n, i, s, j;
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
        while (j <= 2 * i - 1) {
            printf("*");
            j++;
        }
        i++;

    return 0;
}
