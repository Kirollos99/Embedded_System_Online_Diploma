#include<stdio.h>
int main() 
{
   float a , b;

   printf("Enter value a: ");
   scanf("%f",&a);
   printf("Enter value b: ");
   scanf("%f",&b);

   a = a + b;
   b = a - b;
   a = a - b;

   printf("After swapping, value of a = %.2f \n",a);
   printf("After swapping, value of b = %.2f \n",b);
   
   return 0;

}
