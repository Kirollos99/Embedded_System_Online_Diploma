//Comparing Three numbers//

#include<stdio.h>
int main()
{

int num1,num2,num3;

printf("Enter three values:");
scanf("%d\t%d\t%d",&num1,&num2,&num3);

if (num1>num2)
   
   { if (num1>num3)
     printf("The largest value is %d",num1); 
     else 
     printf("The largest value is %d",num3); 
    }

else if (num2>num3)
    
    { printf("The largest value is %d",num2);
    } 
    else printf("The largest value is %d",num3); 
    }




