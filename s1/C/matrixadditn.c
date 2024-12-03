#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j;
    printf("Enter the order of the first matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter the order of the second matrix:");
    scanf("%d%d",&p,&q);
    if((m==p)&&(n==q))
    {
        printf("\nEnter the first matrix elements:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter the second matrix elements:");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nFirst matrix elements are:");
        for(i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("\t%d",a[i][j]);
            }
            printf("\n");
        }
         printf("\nSecond matrix elements are:");
        for(i=0;i<p;i++)
        {
            for (j=0;j<q;j++)
            {
                printf("\t%d",b[i][j]);
            }
             printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\nResultant matrix:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("\t%d",c[i][j]);
            }
             printf("\n");
        }
    }
    else
    printf("\nAddition is not possible:");
    return 0;
}