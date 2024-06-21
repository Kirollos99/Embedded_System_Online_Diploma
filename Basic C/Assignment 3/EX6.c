#include <stdio.h>
int main()
{

    int num,value;
    int sum = 0;
    
    printf("Enter an integer: ");
    scanf("%d",&value);

    for (num = 1 ; num <= value ; num++) 
    {
        sum += num;

    
    }

    printf("Sum = %d", sum);
    return 0;
}
