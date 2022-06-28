// Print Even/odd numbers (while loop)
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter last number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        if (i % 2 == 0) //for odd:- if(i%2!=0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}
