#include<stdio.h>
int main()
{

int i;
int sum;

sum=0;

for(i=1; i<=99 ; i++)
{
   sum = sum + i;
}

printf("The summation of numbers form 1 to 99 is = %d",sum);

}