#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n,m,imp1=0,imp2=0,imp3;
    printf("Marimea primului vector: ");
    scanf("%d",&n);
    printf("Marimea celui de-al doilea vector: ");
    scanf("%d",&m);
    int v[n],w[m];
    printf("Elementele primului vector: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
        if(v[i]%2==1)
        {
            imp1++;
        }
    }
    printf("Elementele celui de-al doilea vector: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&w[i]);
        if(w[i]%2==1)
        {
            imp2++;
        }
    }
    imp3=imp1+imp2;
    int x[imp3];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==1)
        {
            x[j]=v[i];
            j++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(w[i]%2==1)
        {
            x[j]=w[i];
            j++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                int aux=x[j+1];
                x[j+1]=x[j];
                x[j]=aux;
            }
        }
    }
    printf("Elementele impare ale vectorului sunt: ");
    for(int i=0;i<imp3;i++)
    {
        printf("%d ",x[i]);
    }    
}