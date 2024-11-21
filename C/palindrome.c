#include<stdio.h>
int main()
{
    int num,rem,rev=0,n;
    printf("enter the number:");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(n==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;  
}