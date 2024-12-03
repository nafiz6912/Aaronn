#include <stdio.h>
int main()
{
    char ch;
    printf("enter the letter: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
    printf("%c is a vowel.",ch);
    }
    else if ((ch>='a' && ch<='z')|| (ch>='A'&& ch<='z'))
    {
        printf("%c is consoant.", ch);
    }
    else
    {
        printf("%c is not a alphabet.", ch);
    }
    return 0;
}

