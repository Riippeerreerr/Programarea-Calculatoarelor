#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    printf("Dimensiunea matricei:");
    scanf("%d",&n);
    int v[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }
    printf("Matricea arata asa:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\nValorile de pe diagonala principala sunt: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                printf("%d ",v[i][j]);
        }
    }
    printf("\nValorile de pe diagonala secundara sunt: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))
                printf("%d ",v[i][j]);
        }
    }
    printf("\nValorile din tringhiul superior sunt:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
                printf("%d ",v[i][j]);
        }
    }
    printf("\nValorile din tringhiul inferior sunt:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
                printf("%d ",v[i][j]);
        }
    }
    printf("\nExteriorul matricei este:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
                printf("%d ",v[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\nInteriorul matricei este:\n");
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\nMatricea citita in spirala:\n");
    int rowind=0,colind=0,cn=n;
    while(rowind<cn&&colind<n)
    {
        for(int i=colind;i<n;++i)
        {
            printf("%d ",v[rowind][i]);
        }
        rowind++;
        for(int i=rowind;i<cn;++i)
        {
            printf("%d ",v[i][n-1]);
        }
        n--;
        if(rowind<cn)
        {
            for(int i=n-1;i>=colind;--i)
            {
                printf("%d ",v[cn-1][i]);
            }
            cn--;
        }
        if(colind<n)
        {
            for(int i=cn-1;i>=rowind;--i)
            {
                printf("%d ",v[i][colind]);
            }
            colind++;
        }
    }
} 