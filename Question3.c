#include <stdio.h>

int main() {
    int num, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter 10 integer values:\n");

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nTotal Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);

    return 0;
}
