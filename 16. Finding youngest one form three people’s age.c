#include<stdio.h>
void  main()
{
    int ram,sam,don;

    printf("Enter 3 peoples' ages: Ram | Sam | Don \n");
    scanf("%d%d%d",&ram,&sam,&don);

    if(ram>sam)
    {
        if(ram<don)
            printf("Ram is youngest");
        if(ram>don)
            printf("Don is youngest");
    }
    else
    {
        if(sam<don)
            printf("Sam is youngest");
        if(sam>don)
            printf("Don is youngest");
    }
}

