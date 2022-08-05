#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,p,directie,aux=0;
    printf("Cate numere sa aiba vectorul? ");
    scanf("%d",&n);
    int v[n];
    printf("Cu cate pozitii sa se permute vectorul? ");
    scanf("%d",&p);
    printf("In ce directie sa se permute vectorul? Stanga=1 Dreapta=\\0 ");
    scanf("%d",&directie);
    for(int i=0;i<n;i++)
    {
        printf("Elementul %d: ",i);
        scanf("%d",&v[i]);
    }
    printf("Vectorul neschimbat: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    printf("\nVectorul schimbat: ");
    while(p)
    {
        if(directie==1)
        {
            aux=v[0];
            for(int i=0;i<n-1;i++)
            {
                v[i]=v[i+1];
            }
            v[n-1]=aux;
        }
        else if(directie!=1)
        {
            aux=v[n-1];
            for(int i=n-1;i>0;i--)
            {
                v[i]=v[i-1];
            }
            v[0]=aux;
        }
        p--;
    }
    for(int i=0;i<n;i++)
        printf("%d ",v[i]);
} 