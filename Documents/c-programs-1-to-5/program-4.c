#include <stdio.h>

void main() {
    int number1, number2;

    printf("Enter the two numbers, separated by a space: ");
    scanf("%d %d", &number1, &number2);

    int sum = number1 + number2;
    printf("The sum of %d and %d is %d\n", number1, number2, sum);

    int difference = number1 - number2;
    printf("The difference between %d and %d is %d\n", number1, number2, difference);

    int quotient = number1 / number2;
    printf("The quotient obtained on dividing %d by %d is %d\n", number1, number2, quotient);

    int remainder = number1 % number2;
    printf("The remainder obtained on dividing %d by %d is %d\n", number1, number2, remainder);

    int product = number1 * number2;
    printf("The product of %d and %d is %d\n", number1, number2, product);
}
