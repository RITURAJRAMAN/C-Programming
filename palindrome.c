// Check Palindrome number
#include <stdio.h>

int main() {
    int a,x,rev = 0;
    printf("Enter number: ");
    scanf("%d", &a);
    x = a;
    while (a > 0) {
        rev = (rev * 10) + (a % 10);
        a /= 10;
    }
    if (x == rev)
        printf("palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
