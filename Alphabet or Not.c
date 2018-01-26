#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    printf("Enter the character");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    printf("Alphabet");
    else
    printf("Not a Alphabet");
}
