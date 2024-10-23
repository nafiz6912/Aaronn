#include <stdio.h>
int main()
{
    float fahrenheit,celcius;
    printf("enter Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celcius= (fahrenheit-32)*5/9;
    printf("Celcius: %f",celcius);
    return 0;
}