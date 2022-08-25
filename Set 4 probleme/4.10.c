#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Vectorul va avea numarul de elemente: ");
    scanf("%d",&n);
    int v[n];
    printf("Vectorul va avea urmatoarele elemente: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
    }
    int p;
    printf("Vectorul de pozitii va avea numarul de elemente: ");
    scanf("%d",&p);
    int poz[p];
    printf("Vectorul va avea urmatoarele elemente: ");
    for (int i = 0; i < p; i++)
    {
        scanf("%d",&poz[i]);
    }
    printf("Elementele cerute sunt: ");
    for(int i=0;i<p;i++)
    {
        printf("%d ",v[poz[i]]);
    }    
}