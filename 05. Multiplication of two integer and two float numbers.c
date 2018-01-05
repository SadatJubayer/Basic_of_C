#include<stdio.h>
int main()
{   int a,b;
    float c,d,mul=0;

    printf("Enter two integer and two float numbers: \n");
    scanf("%d%d%f%f",&a,&b,&c,&d);

    mul=a*b*c*d;

    printf("Multiplication of the numbers: ");
    printf("%f",mul);
    return 0;
}
