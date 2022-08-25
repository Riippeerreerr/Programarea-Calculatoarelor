#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Numarul de elemente din vector: ");
    scanf("%d",&n);
    int v[n];
    printf("Elementele vectorului sunt: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    printf("\nVectorul descrescator este: ");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]<v[j+1])
            {
                int aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
}