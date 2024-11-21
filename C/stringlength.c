#include<stdio.h>
int main()
{
    char text[20];
    int i,count=0;
    printf("Enter any string:");
    gets(text);
    printf("the string is:");
    puts(text);
    for(i=0; text[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of '%s' = %d",text,count);
    return 0;
}