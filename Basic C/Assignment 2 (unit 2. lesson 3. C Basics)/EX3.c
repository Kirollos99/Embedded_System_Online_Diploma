/*EX3:
Write C Program to Add Two Integers
i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23*/

#include<stdio.h>
int main ()
 {

int num1,num2,summation;

printf("Enter two integers: ");
scanf("%d\n%d",&num1,&num2);

summation=num1+num2;
printf("Sum: %d",summation);
return 0;

}