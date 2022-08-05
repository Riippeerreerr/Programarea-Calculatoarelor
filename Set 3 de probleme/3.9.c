#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int v[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }
    int aux=0;
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    for(int i=0;i<n;i++)
    {
            aux=v[i][c2];
            v[i][c2]=v[i][c1];
            v[i][c1]=aux;
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
} 