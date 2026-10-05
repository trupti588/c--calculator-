#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Cannot divide by zero.");
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}