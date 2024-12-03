#include<stdio.h>
int main()
{
    char ch;
    float num1, num2, result=0.0;
    printf("enter the operation:(+, -, /, *) : ");
    scanf("%c",&ch);
    printf("enter the two numbers: ");
    scanf("%f %f",&num1,&num2);
    switch(ch)
    {
    case '+':result=num1+num2;
    printf("sum=%.2f",result);
    printf("\n");
    break;

    case '-':result=num1-num2;
    printf("difference=%.2f",result);
    printf("\n");
    break;

    case '*':result=num1*num2;
    printf("product=%.2f",result);
    printf("\n");
    break;

    case '/':result=num1/num2;
    printf("quotient=%.2f",result);
    printf("\n");
    break;

    default:printf("wrong choice");
    printf("\n");
    break;
    }
    return 0;
}