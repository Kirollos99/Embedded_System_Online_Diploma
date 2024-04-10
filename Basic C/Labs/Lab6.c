#include<stdio.h>
int main()
{
 int i,num;
 float degree,sum;

 printf("Enter the number of students: ");
 scanf("%d",&num);

  degree = 0;
  sum = 0;

 for( i=1 ; i<=num ;i++)
 {
   printf("Enter student (%d) degree :",i);
   scanf("%f",&degree);
   sum += degree;
 }
 printf("The Average students degree is : %f",sum/num);

}