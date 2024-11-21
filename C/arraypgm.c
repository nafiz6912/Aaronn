#include<stdio.h>
int main()
{
    int a[10],limit;
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("enter the array elements:");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}