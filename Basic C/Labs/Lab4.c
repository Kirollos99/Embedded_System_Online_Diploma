// switch case for circle area and circumference calculation //

#include<stdio.h>
int main()
{
 int radius;
 float area,circumference;
 char choice;

 printf("Please enter the radius of the circle: ");
 scanf("%d",&radius);

 printf("Press 'a' for Area or Press 'c' for circumference: ");
 getchar();
 scanf("%c",&choice);

switch (choice)
{
 case 'a':
 case 'A':
 area = (22.0/7)*radius*radius;
printf("Area = %f",area);
break;

case 'c':
case 'C':
 circumference = 2*(22.0/7)*radius;
printf("circumference = %f",circumference);
break;

default:
printf("Invalid choice");
break;

}

}