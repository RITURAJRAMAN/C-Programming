// factorial of a number
#include <stdio.h>

int main() {
    int a,fac=1;
    printf("Enter number: ");
    scanf("%d", &a);
    while (a > 0) {
        fac = fac * a;
        a--;
    }
    printf("factorial= %d",fac);
    return 0;
}
