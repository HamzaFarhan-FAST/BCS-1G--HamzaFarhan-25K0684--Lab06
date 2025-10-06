#include <stdio.h>

int main() {
    int value, number, remainder, reversed = 0;

    printf("Please Enter a Number: ");
    scanf("%d", &value);

    number = value;  

    
    if (number < 0) {
        printf("Negative numbers cannot be palindromes.\n");
        return 0;
    }


    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

   
    if (reversed == value)
        printf("The entered Number is a Palindrome!\n");
    else
        printf("The entered Number is not a Palindrome!\n");

    return 0;
}
