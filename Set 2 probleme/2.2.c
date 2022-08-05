#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        printf("Laturile pot face un triunghi ");
        if(a==b==c)
        {
            printf("echilateral ");
        }
        else if((a==b)||(a==c)||(b==c))
        {
            printf("isoscel ");
        }
        else if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(c*c)))
        {
            printf("dreptunghic ");
        }

        else
        {
            printf("oarecare ");
        }
    }
    else 
    {
        printf("Laturile nu pot face un triunghi");
    }

}