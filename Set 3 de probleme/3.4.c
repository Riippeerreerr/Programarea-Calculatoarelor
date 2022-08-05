#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,aux;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
    }
    int testare=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            testare++;
        }
    }
    if(testare==0)
    {
        printf("Toate elementele sunt la fel");
    }
    else if(testare==n-1)
    {
        printf("Toate elementele sunt diferite");
    }
    else if(testare>0&&testare<n-1)
    {
        printf("Elementele sunt oarecare");
    }
}