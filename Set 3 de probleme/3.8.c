#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int a[m][n], b[p][q];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    if(m!=p&&n!=q)
        printf("Nu se pot aduna matricele!\n");
    else if(m==p&&n==q)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a[i][j]=a[i][j]+b[i][j];
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n");
    if(n!=p)
    {
        printf("Nu se pot inmulti matricele!");
    }
    else if(n==p)
    {
        int c[m][q];
        for(int i=0;i<m;i++)
            {
                for(int j=0;j<q;j++)
                {
                    c[i][j]=0;
                    for(int k=0;k<p;k++)
                    {
                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    }
                }
            }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
} 