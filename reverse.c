// Reverse of a number
#include <stdio.h>

int main() {
    int a,rev=0;
    printf("Enter number: ");
    scanf("%d", &a);
    while (a > 0) {
        rev = (rev * 10) + (a % 10);
        a /= 10;
    }
    printf("Reverse= %d",rev);
    return 0;
}
