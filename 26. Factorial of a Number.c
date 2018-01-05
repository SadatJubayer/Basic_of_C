#include<stdio.h>
void main()
{
    int i,j,k=1;

    printf("Enter a number: ");
    scanf("%d",&j);

    for(i=1;i<=j;i++)
    {
        k=k*i;
    }

    printf("factorial of %d is: %d",j,k);
}
