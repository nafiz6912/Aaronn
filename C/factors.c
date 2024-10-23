#include<stdio.h>
int main()
{
    int i=1,num,factor;
    printf("enter a number to find factor: ");
    scanf("%d",&num);
    printf("all factors of %d are \n",num);
    do
    {
       if(num % i == 0)
       {
        printf("%d\t",i);
       }
       i++;
    } while(i<=num);
    printf("\n");
    return 0;
}