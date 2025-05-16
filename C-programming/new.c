#include <stdio.h>

int main() {
    int digit;
    printf("Enter a digit: ");
    scanf("%d", &digit);

    if (digit % 3 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
