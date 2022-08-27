#include <string.h>
#include <math.h>
#include <stdio.h>

char analiza(int a,int b,int c)
{
    if(a==b&&b==c&&a==c)
        return 'I';
    else if(a<=b&&b<=c)
        return 'C';
    else if(a>=b&&b>=c)
        return 'D';
    else 
        return 'N';
}

int main()
{
    int a,b,c;
    printf("Numerele vor fi: ");
    scanf("%d %d %d",&a,&b,&c);
    if(analiza(a,b,c)=='C')
        printf("Numerele sunt crescatoare");
    else if(analiza(a,b,c)=='I')
        printf("Numerele sunt identice");
    else if(analiza(a,b,c)=='D')
        printf("Numerele sunt descrescatoare");
    else if(analiza(a,b,c)=='N')
        printf("Numerele nu au nicio ordine");
}