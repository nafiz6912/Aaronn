#include <stdio.h>
int main()
{
    int choice,sum,i,n;
    char ch;
    while(1)
    {
        printf("------- main menu -------");
        printf("1:print alphabets from a-z\n2:print numbers in reverse order from 1 to n\n3:suum of first N natural numbers\n4:exist\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("alphabets from a to z are\n");
            ch='a'
            printf("\t");
            while(ch<='z')
            {
                printf("%c\t\t",ch);
                ch++;
            }
            printf("\n");
            break;
        }
    }
}