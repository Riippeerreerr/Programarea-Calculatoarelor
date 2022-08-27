#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void getDigits(int n,int *digitcount, int **digits)
{
    int aux=n;
    *digitcount=0;
    while(aux)
    {
        (*digitcount)++;
        aux=aux/10;
    }
    *digits=(int*)malloc((*digitcount)*sizeof(int));
    aux=n;
    for(int i=0;i<*digitcount&&aux;++i)
    {
        (*digits)[i]=aux%10;
        aux=aux/10;
    }
}

int main()
{
    int n;
    printf("Numarul este: ");
    scanf("%d",&n);
    int digitcount, *digits;
    getDigits(n,&digitcount,&digits);
    printf("\n%d \n",digitcount);
    for(int i=0;i<digitcount;++i)
    {
        printf("%d ",digits[i]);
    }
}