#include <stdio.h>
int main()
{

    int num, count;
    unsigned long result = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        for (count = 1; count <= num; count++)
        {
            result *= count;
        }
        printf("Factorial = %lu", result);
    }

    else
    {
        printf("Error!!! Factorial of negative number doesn't exist");
    }

    return 0;
}