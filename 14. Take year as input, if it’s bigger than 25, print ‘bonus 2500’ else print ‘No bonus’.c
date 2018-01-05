#include<stdio.h>
void main()
{
    int s;

    printf("Enter Year: ");
    scanf("%d",&s);

    if(s>=25)
        printf("Bonus 25000");
    else
        printf("No Bonus");
}

