#include <stdio.h>
int main()
{
double cp,sp,amt;
printf("Enter cost price: ");
scanf("%lf",&cp);
 printf("Enter selling price: ");
 scanf("%lf", &sp);

 if(sp>cp)
 {
amt = sp - cp;
 printf("Profit = %.2lf", amt);
 }
else if(cp>sp)
{
    amt = cp - sp;
 printf("Loss = %.2lf", amt);
}
else
{
printf("No Profit OR No Loss.");
}
return 0;
}