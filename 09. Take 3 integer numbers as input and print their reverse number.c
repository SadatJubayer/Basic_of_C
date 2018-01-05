#include<stdio.h>
void main()
{
    int num,a,b,c,d,rev;

    printf("Enter a 3 Digit number \n");
    scanf("%d",&num);

    a=num/100;
    b=num%100;
    c=b/10;
    d=b%10;
    rev=d*100+c*10+a*1;

    printf("Reversed number: %d",rev);
}

