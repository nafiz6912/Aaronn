#include<stdio.h>
int main()
{
    int num,Flag=0;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==1)
    printf("\nnot prime nor composite");
    for(int i=2;i<=(num/2);i++)
    {
        if(num%i==0)
        {
            Flag=1;
            break;
        }
    }
    if(Flag==1)
    {
    printf("\nnot prime");
    }
    else
    {
    printf("\nprime");
    }
    return 0;
}