#include <stdio.h>
int main()
{
    int principal,rate,time,interest;
    printf("Enter the principal amount, rate, time: ");
    scanf("%d%d%d",&principal,&rate,&time);
    interest=principal*rate*time/100;
    printf("The Interest amount is %d",&interest);
    return 0;
}