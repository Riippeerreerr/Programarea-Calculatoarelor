#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(((int)c>=97)&&((int)c<=122))
        printf("Este litera mica");
    else if(((int)c>=65)&&((int)c<=90))
        printf("Este litera mare");
    else if(((int)c>=48)&&((int)c<=57))
        printf("Este cifra");
    else 
        printf("Este alt caracter");
}