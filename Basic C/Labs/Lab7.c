#include <stdio.h>
int main()
{

    int rows = 10;
    int i, j;

    for (i = 0; i <= rows; i++)
    {
        printf("\n") ;for (j = i; j <= (rows - 1); j++)
        {

            printf("%d", j);
        }
    }
}