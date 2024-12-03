#include<stdio.h>
int main()
{
    int a[8],limit,ele,loc;
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
    printf("enter element and position to insert:");
    scanf("%d%d",&ele,&loc);
    for(int i=limit-1;i>=loc-1;i--)
    {
        a[i+1]=a[i];
    }
    a[loc-1]=ele;
    printf("array after insertion:");
    for(int i=0;i<limit+1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}