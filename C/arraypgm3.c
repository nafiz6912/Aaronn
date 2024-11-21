#include<stdio.h>
int main()
{
    int a[8],limit;
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("enter the array elements:");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array before insertion\n");
    for(int i=0;i<limit;i++)
    {
        printf("%d\n",a[i]);
    }
}