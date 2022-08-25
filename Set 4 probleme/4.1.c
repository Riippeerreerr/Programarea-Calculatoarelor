#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n,cont=0,plus=0,minus=0;
    printf("Vectorul are numarul de elemente: ");
    scanf("%d",&n);
    int v[n];
    printf("Vectorul are urmatoarele elemente: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        printf("%d ",v[i]);
    }
    for(int i=1;i<n-1;i++)
    {   
        if(v[i-1]==v[i]==v[i+1])
        {
            cont++;
        }
        else
        {
            if(v[i]<=v[i+1])
            {
                plus++;
            }
            else if(v[i>=v[i+1]])
            {
                minus++;
            }
        }
    }
    if(cont==n-2)
            printf("Vectorul este constant.\n");
    else if(plus==0)
    {
        printf("Vecotrul este descrescator\n");
    }
    else if(minus==0)
    {
        printf("Vectorul este crescator\n");
    }
    else if(plus!=0&&minus!=0)
    {
        printf("Vectorul este oarecare\n");
    }
}