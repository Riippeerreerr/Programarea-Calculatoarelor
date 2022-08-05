#include <stdio.h>
#include <string.h>

int main()
{
    int n, cont=0;
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
            cont++;
    }
    if(cont==0)
        printf("Numarul este prim.");
    else 
        printf("Numarul nu este prim.");
} 