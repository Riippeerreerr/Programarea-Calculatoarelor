#include <stdio.h>
#include <string.h>

int main()
{
    int n,poz=0,neg=0;
    scanf("%d",&n);
    while(n)
    {
        if(n>0)
        {
            poz++;
        }
        else if(n<0)
        {
            neg++;
        }
        scanf("%d",&n);
    }
    printf("Exista %d numare negative si %d numere pozitive",neg,poz);
}