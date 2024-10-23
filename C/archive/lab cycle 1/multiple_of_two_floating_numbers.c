#include <stdio.h>
int main()
{
     float num1,num2,multiple=0.0;
     printf("enter two numbers: ");
     scanf("%f %f",&num1,&num2);
     multiple=num1*num2;
     printf("product of %f and %f is %f",num1,num2,multiple);
     return 0;
}
