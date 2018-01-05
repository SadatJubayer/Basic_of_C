#include<stdio.h>
void main()
{
    int i,sum=0;

    for(i=1;i<=100;i++)
    {
        sum=sum+i;
        i=i+1;
    }

    printf("%d",sum);
}

