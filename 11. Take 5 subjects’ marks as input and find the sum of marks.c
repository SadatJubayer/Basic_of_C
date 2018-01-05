#include<stdio.h>
void main()
{
    float math,phy,che,pl1,eng,sum=0,avg;

    printf("Enter marks of 5 subjects: \n");
    scanf("%f%f%f%f%f",&math,&phy,&che,&pl1,&eng);

    sum=math+phy+che+pl1+eng;
    avg=sum/5;

    printf("Average Mark: %f",avg);
}
