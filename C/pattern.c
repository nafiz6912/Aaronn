#include<stdio.h>
int main()
{
    int i,j,N;
    printf("enter n:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=(i*2-1);j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}