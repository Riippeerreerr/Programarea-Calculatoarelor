#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n, copielungime=0,st=0,lungime=0;
    printf("Numarul de elemente din vector: ");
    scanf("%d",&n);
    int v[n],c[n];
    printf("Vectorul are urmatoarele elemente: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i+1]>=v[i])
        {
            lungime++;
            if(lungime>copielungime)
            {
                copielungime=lungime;
                st=i+1-lungime;
            }
        }
        else
        {
            copielungime=lungime;
            lungime=0;
        }
    }
    printf("\nSectiunea cea mai lunga secventa crescatoare este: ");
    for (int i = 0; i <= copielungime; i++)
    {
        c[i]=v[st+i];
        printf("%d ",c[i]);
    }
}