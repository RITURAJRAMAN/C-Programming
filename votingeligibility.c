// Check an age is eligible for voting or not (if/else)
#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible");
    else
        printf("Not eligible");
    return 0;
}
