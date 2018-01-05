#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter two number: \n");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("After Swapping:  \n%d\n%d",a,b);

}
