#include <stdio.h>
int main()
{

    float num;

    printf("Enter a number: ");
    scanf("%f",&num);

    if (num > 0)
    {
        printf("%.2f is positve.",num);
    }

    else if (num < 0)
    {
        printf("%.2f is negative.",num);
    }

    else
    {
        printf("You entered zero");
    }
    return 0;
}
