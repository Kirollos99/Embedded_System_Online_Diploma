// Lab1 calculate the Area or Circumference of circle // 

#include<stdio.h>
int main()
{

float radius;
float circumference;
float area;
char choice;

printf("Enter the radius: ");
 scanf("%f",&radius);

printf("Press 'a' if you need area and 'c' if you need circumference: ");
getchar();
scanf("%c",&choice);

if (choice == 'a')
  {  area = (22.0/7)*radius*radius;
     printf("area is = %f",area);
  }

else if (choice == 'c')
  {  circumference= 2*(22.0/7)*radius;
    printf("circumference is = %f",circumference);
  }

else 
   {
    printf("Invalid input you should pressa a or c Only");
   }

}
