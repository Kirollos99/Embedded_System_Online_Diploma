#include <stdio.h>

int main()
{
    char sign;
    float num1, num2, result;

    printf("Enter operator either + or - or * or /: ");
    scanf(" %c", &sign); // Note the space before %c to skip any whitespace
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (sign)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
        else
        {
            printf("Error! Division by zero.\n");
        }
        break;
    default:
        printf("Error! Operator is not correct.\n");
        break;
    }

    return 0;
}
