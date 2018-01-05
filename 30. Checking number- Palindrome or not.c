#include<stdio.h>
void main()
{
    int num,a,b,c,d,e,f,g,h,rev;

    printf("Enter a 5 digit number: ");
    scanf("%d",&num);

    a=num/10000;
    b=num%10000;
    c=b/1000;
    d=b%1000;
    e=d/100;
    f=d%100;
    g=f/10;
    h=f%10;
    rev=h*10000+g*1000+e*100+c*10+a*1;

    if(rev==num)
        printf("Palindrome");
    else
        printf("not palindrome");
}
