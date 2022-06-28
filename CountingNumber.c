// Print Counting numbers (while loop)
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter last number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
