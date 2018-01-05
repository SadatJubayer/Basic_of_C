 /* Recruitment for male
Age: 18 to 21
Height: 5.5+
Weight: 50+
Marital status: Single

Recruitment for female
Age: 18 to 21
Height: 5.2+
Weight: 45+
Marital status: Single

*/

#include <stdio.h>
void main()
{
    char Gender,M_S;
    int age;
    float Height,Weight;

    printf("Enter: Gender | marital status | Age | Height | Weight \n");
    scanf("%c%c%d%f%f",&Gender,&M_S,&age,&Height,&Weight);

    if((Gender=='M'&&(M_S == 'S'&& age >=18&&age<= 22)&& Height >= 5.5 && Weight <= 50)||
       (Gender=='F'&&(M_S == 'S'&& age >=18 && age<= 21)&& Height >= 5.2 && Weight <= 45))
        printf("Eligible");
    else
        printf("Not Eligible!");
}

