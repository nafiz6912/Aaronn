#include <stdio.h>
int main()
{
int num1,num2,quatient,reminder;
printf("enter two numbers: ");
scanf("%d%d",&num1,&num2);
quatient=num1/num2;
reminder=num1%num2;
printf("quatient= %d \nreminder=%d",quatient,reminder);
return 0;
}