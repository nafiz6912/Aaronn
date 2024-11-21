#include<stdio.h>
int main()
{
    int a[10],limit,temp;
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("enter the array elements");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array before sorting\n");
   for (int i=0;i<limit;i++)
   {
    printf("%d\n",a[i]);
   }
   for (int i=0;i<limit;i++)
   {
   for(int j=i+1;j<limit;j++)
    {
        if(a[i]>a[j])
        
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   }
   printf("array after sorting\n");
   for(int i=0;i<limit;i++)
   {
    printf("%d\n",a[i]);
   }
   return 0;
}