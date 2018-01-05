#include<stdio.h>
void main()
{
    int num,a,b,c,d,e,f,g,h,sum;

    printf("Enter a 5 Digit number \n");
    scanf("%d",&num);

    a=num/10000;
    b=num%10000;
    c=b/1000;
    d=b%1000;
    e=d/100;
    f=d%100;
    g=f/10;
    h=f%10;
    sum=h+g+e+c+a;

    printf("Sum of the digits: %d",sum);
}

