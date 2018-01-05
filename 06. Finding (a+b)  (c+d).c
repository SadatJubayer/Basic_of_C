// a and b as integer, c and d as float. Find- (a+b)/(c+d)


#include<stdio.h>
void main()
{
    int a,b,c;
    float d,e,f,t=0;

    printf("Enter a, b, c and d:\n");
    scanf("%d%d%f%f",&a,&b,&d,&e);

    c=a+b;
    f=d+e;
    t=c/f;


    printf("(a+b)/(c+d) is:  ");
    printf("%f",t);

}
