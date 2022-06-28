//*************************************************************************************
//****** pattern printing:- *****     54321       11111       12345 int c=1;
//                          ****      5432        2222        1234  while(j>=i)
//                          ***       543         333         123   {
//                          **        54          44          12        printf("%d",c);
//                          * ("*")   5 ("%d",j)  5 ("%d",i)  1         c++;
#include <stdio.h>

int main() {
    int n, i, j;                                                            //j--;
    printf("Enter no. of rows: ");                                    //}
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("\n");
        j = n;
        while (j >= i) {
            printf("*");
            j--;
        }
        i++;
    }
    return 0;
}
