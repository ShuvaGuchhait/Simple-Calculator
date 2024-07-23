#include <stdio.h>

int main() {
    char operator;
    float a, b;
    float result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter the first number: ");
    scanf("%f ",&a);
    printf("Enter the second number");
    scanf("%f",&b);

    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 1;
    }

    printf("Result: %.2f %c %.2f = %.2f\n", a, operator, b, result);
    return 0;
}

