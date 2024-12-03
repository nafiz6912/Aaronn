#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("enter the number:");
    scanf("%d",&num);
    do
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }while(num>0);
    printf("sum of digits is %d",sum);
    return 0;
}