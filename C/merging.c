#include<stdio.h>
int main()
{
    int a[100],b[10],c[20],i,size1,size2,k;
    printf("Enter size of the first array:");
    scanf("%d",&size1);
    printf("Enter size of the second array:");
    scanf("%d",&size2);
    printf("\nEnter the elements of the first array:");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    k=i;
    printf("\nEnter the elements of the second array:");
    for(int r=0;r<size2;r++)
    {
        scanf("%d",&b[r]);
        c[k]=b[r];
        k++;
    }
    printf("\nFirst array:");
    for(int j=0;j<size1;j++)
    {
        printf("\n%d",a[j]);
    }
    printf("\nSecond array:");
    for(int m=0;m<size2;m++)
    {
        printf("\n%d",b[m]);
    }
    printf("\nMerged array:");
    for(int i=0;i<k;i++)
    {
        printf("\n%d",c[i]);
    }
    return 0;
}