#include <string.h>
#include <math.h>
#include <stdio.h>

int perfect(int n)
{
    int suma=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            suma=suma+i;
    }
    printf("%d",suma);
    if(n==suma)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(perfect(n))
        printf("Numarul %d este perfect",n);
    else
        printf("Numarul nu este perfect");
}