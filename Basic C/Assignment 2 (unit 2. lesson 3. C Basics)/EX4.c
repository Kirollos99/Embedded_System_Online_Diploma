/*Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###
Enter two numbers: 2.4
1.1
Product: 2.640000*/

#include <stdio.h>
int main ()
{

float num1,num2,prod;

printf("Enter two numbers: ");
scanf("%f\n%f",&num1,&num2);

prod=num1*num2;
printf("Product: %f",prod);
return 0;

}