// Removing a number from array
#include <stdio.h>

int main() {
    int a[10], i, j, index, key;
    for (i = 0; i < 10; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    printf("\nEnter element to remove: ");
    scanf("%d", &key);
    index = 9;
    for (i = 0; i <= index; i++) {
        if (a[i] == key) {
            for (j = i + 1; j <= index; j++) {
                a[i] = a[j];
                i++;
            }
            index--;
        }
    }
    printf("\nArray after removing %d is:", key);
    for (i = 0; i <= index; i++)
        printf("\n%d", a[i]);
    return 0;
}
