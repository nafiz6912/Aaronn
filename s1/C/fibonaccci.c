#include<stdio.h>
int main()
{
    int first=0,second=1,third,limit;
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("\n%d\t%d",first,second);
    third=first+second;
    for(int i=1;i<=limit;i++)
    {
        printf("\t%d",third);
        first=second;
        second=third;
        third=first+second;
    }
    return 0;
}