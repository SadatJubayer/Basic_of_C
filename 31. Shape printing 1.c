#include<stdio.h>
void main()
{
    int row,star,level;

    printf("Enter number of rows: ");
    scanf("%d",&level);

    for(row=1;row<=level;row++)
    {
        for(star=1;star<=row;star++)
        {
            printf("*");
        }
        printf("\n");
    }
}

