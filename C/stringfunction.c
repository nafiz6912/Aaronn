#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int ch,len=0,j;
    do
    {
        printf("\tMENU");
        printf("\n---------------------------");
        printf("1:Find Length of String");
        printf("\n2:Find Reverse of String");
        printf("\n3:Concatenate Strings");
        printf("\n4:Copy String");
        printf("\n5:Compare Strings");
        printf("\n6:String to lower");
        printf("\n6:String to upper");
        printf("\n8:Exit");
        printf("\n---------------------------");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter String:");
            scanf("%s",str1);
            len=strlen(str1);
            printf("Length of string:%d\n\n",len);
            break;
            case 2:
            printf("Enter String:");
            scanf("%s",str1);
            strrev(str1);
            printf("Reverse string:%s\n\n",str1);
            break;
            case 3:
            printf("Enter First String:");
            scanf("%s",str1);
            printf("Enter Second String:");
            scanf("%s",str2);
            strcat(str1,str2);
            printf("String After Concatenation:%d\n\n",str1);
            break;
            case 4:
            printf("Enter String1:");
            scanf("%s",str1);
            printf("Enter String2:");
            scanf("%s",str2);
            printf("\nString before copied:\nString1=\"%s\"\n",str1,str2);
            strcpy(str2,str1);
            printf("----------------------------\n");
            printf("\"We are copying string1 to string2\"\n");
            printf("----------------------------\n");
            printf("\nString after copied:\nString2=\"%s\"\n\n",str1,str2);

            break;
        }
    }
    
}