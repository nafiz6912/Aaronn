#include<stdio.h>
int main()
{
    int a[10][10],rsize,csize;
    printf("Enter row size and column size:");
    scanf("%d%d",&rsize,&csize);
    for(int i=0;i<rsize;i++)
    {
        for(int j=0;j<csize;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(int i=0;i<rsize;i++)
    {
        for(int j=0;j<csize;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
