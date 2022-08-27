#include <string.h>
#include <math.h>
#include <stdio.h>
#include<stdbool.h>

const char* conversie(char *a,char *b,char *c)
{
    bool okA=false,okB=false,okC=false;
    if(*a>='a'&&*a<='z')
    {
        okA=true;
        *a=*a-32;
    }
    if(*b>='a'&&*b<='z')
    {
        okB=true;
        *b=*b-32;
    }
    if(*c>='a'&&*c<='z')
    {
        okC=true;
        *c=*c-32;
    }
    static char string[256]={};
    if(!okA)
    {
        strcat(string, "Primul caracter nu poate fi transformat.\n");
    }
    if(!okB)
    {
        strcat(string, "Al doilea caracter nu poate fi transformat.\n");
    }
    if(!okC)
    {
        strcat(string, "Al treilea caracter nu poate fi transformat.\n");
    }

    return string;
}


int main()
{
    char a,b,c;
    printf("Caracterele ce trebuie convertite: ");
    scanf("%c %c %c",&a,&b,&c);
    const char* string=conversie(&a,&b,&c);
    printf("\n %s",string);
    printf("\n Caracterele upper case sunt %c %c %c",a,b,c);
}