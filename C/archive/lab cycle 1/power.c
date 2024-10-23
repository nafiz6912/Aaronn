#include <stdio.h>
#include<math.h>
int main()
{
int base,exponent,power;
printf("enter base and exponent: ");
scanf("%d%d",&base,&exponent);
power=pow(base,exponent);
printf("power=%d",power);
return 0;
}