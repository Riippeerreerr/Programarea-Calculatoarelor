#include <stdio.h>
#include <string.h>

int main()
{
    int nr;
    scanf("%d",&nr);
    if(nr==1)
        printf("luni");
    else if(nr==2)
        printf("marti");
    else if(nr==3)
        printf("miercuri");
    else if(nr==4)
        printf("joi");
    else if(nr==5)
        printf("vineri");
    else if(nr==6)
        printf("sambata");
    else if(nr==7)
        printf("duminica");
    else 
        printf("eroare");
}