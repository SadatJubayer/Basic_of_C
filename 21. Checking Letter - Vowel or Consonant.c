#include<stdio.h>
void main()
{
    char p;

    printf("Enter a letter: \n");
    scanf("%c",&p);

    if(p=='A'||p=='a'||p=='E'||p=='e'||p=='I'||p=='i'||p=='O'
                                    ||p=='o'||p=='U'||p=='u')
        printf("%c is a Vowel");
    else
        printf("%c is a consonant");
}

