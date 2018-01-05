#include<stdio.h>
void main()
{
    float c,f;

    printf("Enter Temperature in Celsius: \n");
    scanf("%f",&c);

    f=((c-32)*9/5);

    printf("In Fahrenheit: %f",f);
}
