#include <stdio.h>
#include <math.h>
int main()
 {
float a,b,c;
float root1,root2,imaginary;
float discriminant;
printf("enter the value of a,b,c of quadrtic equation(aX^2+bX+c); ");
scanf("%f%f%f",&a,&b,&c);
discriminant=(b*b)-(4*a*c);
if(discriminant>0)
{
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);

    printf("two distinct and real rrots exists: %.2f and %.2f", root1,root2);
}
else if(discriminant==0)
{
    root1=root2=(-b)/(2*a);

    printf("two equal and rel roots exists: %.2f and %.2f", root1,root2);
}else if(discriminant<0)
{
    root1=root2=-b/(2*0);
    imaginary = sqrt(-discriminant)/(2*a);

    printf("two distinct complex roots exists: %.2f + i%.2f and %.2f-i%.2f",
    root1,imaginary,root2,imaginary);
}
return 0;
 }