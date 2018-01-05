#include<stdio.h>
void main()
{
    int e,h,x,t,i=1;

    for(e=1;e<=15;e++)
    {
        printf("Enter %d no. employee's working hours: \n", i);
        scanf("%d",&h);

        i++; // employee no. counter
        if(h>40)
        {
            x=h-40;
            t=x*600;
            printf("Extra hour:%d \n",x);
            printf("Bonus:%d \n",t);
        }
        else
            printf("no Extra bonus \n");
    }
}

