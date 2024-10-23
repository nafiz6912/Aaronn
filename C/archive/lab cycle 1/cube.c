#include <stdio.h>
int main()
{
int num,cube=0;
printf("Enter a number:");
scanf("%d",&num);
cube=num*num*num;
printf("cube of %d is %d",num,cube);
return 0;
}