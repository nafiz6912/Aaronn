#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number for multiplication table:");
    scanf("%d",&num);
    printf("multiplication table of %d:",num);
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}