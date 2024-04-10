// The minimum 2 numbers with inline condtion//

#include<stdio.h>
int main()
{
  int num1,num2;

  printf("Please Enter value[1]: ");
  scanf("%d",&num1);
  printf("Please Enter value[2]: ");
  scanf("%d",&num2);

  printf("The minimum value is %d",(num1>num2) ? num2:num1);

}