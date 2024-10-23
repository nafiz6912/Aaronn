#include <stdio.h>
int main()
{
   int num1,num2,num3,large;
   printf("enter three numbers: ");
   scanf("%d%d%d",&num1,&num2,&num3);
   if((num1>num2)&&(num1>num3))
   large=num1;
   else if((num2>num1)&&(num2>num3))
   large=num2;
   else
   large=num3;
   printf("largest number is %d",large);
   return 0;
}