#include<stdio.h>
void main()
{
    int row,num,level;

    printf("Enter number of rows: ");
    scanf("%d",&level);

    for(row=1;row<=level;row++)
    {
        for(num=1;num<=row;num++)
        {
            printf("%d",num);
        }
        printf("\n");
    }
}

