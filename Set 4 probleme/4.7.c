#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n,m;
    printf("Dimensiunile matricei sunt:");
    scanf("%d",&n);
    scanf("%d",&m);
    int v[n][m];
    printf("Elementele matricei sunt:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }
    for(int i=0;i<n;i=i+2)
    {
        for(int j=0;j<m;j++)
        {
            int temp=0;
            if(v[i][j]%2==1)
                continue;
            for(int k=j+1;k<m;k++)
            {
                if(v[i][k]%2==0)
                {
                    if(v[i][j]>v[i][k])
                    {
                        temp=v[i][j];
                        v[i][j]=v[i][k];
                        v[i][k]=temp;
                    }
                }
            }
        }
    }
    printf("Matricea sortata dupa nr pare pe liniile pare:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
} 