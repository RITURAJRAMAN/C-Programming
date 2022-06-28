// Check Armstrong number
#include <stdio.h>

int main() {
    int a, x, sum = 0;
    printf("Enter number: ");
    scanf("%d", &a);
    x = a;
    while (a > 0) {
        sum = sum + (a % 10) * (a % 10) * (a % 10);
        a = a / 10;
    }
    if (sum == x)
        printf("Armstrog number");
    else
        printf("Not an armstrong number");
    return 0;
}
