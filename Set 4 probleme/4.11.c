#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n,m,variabila;
    printf("Dimensiunile matricii vor fi: ");
    scanf("%d%d",&n,&m);
    printf("Matricea va avea urmatoarele elemente:");
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matricea este de forma:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Ce actiuni doriti sa efectuati?\n0-crescator pe linii \n1-crescator pe coloane\n2-descrescator pe linii \n3-descrescator pe coloane ");
    scanf("%d",&variabila);
    if(variabila==0)
        for(int k=0;k<n;++k)
        {
            for(int i=0;i<m;++i)
            {
                for(int j=0;j<m-i-1;++j)
                {
                    if(mat[k][j]>mat[k][j+1])
                    {
                         int aux=mat[k][j+1];
                        mat[k][j+1]=mat[k][j];
                        mat[k][j]=aux;
                    }
                }
            }
        }
    else if(variabila==1)
        for(int k=0;k<m;++k)
        {
            for(int i=0;i<n;++i)
            {
                for(int j=0;j<n-i-1;++j)
                {
                    if(mat[j][k]>mat[j+1][k])
                    {
                        int aux=mat[j+1][k];
                        mat[j+1][k]=mat[j][k];
                        mat[j][k]=aux;
                    }
                }
            }
        }
    else if(variabila==2)
        for(int k=0;k<n;++k)
        {
            for(int i=0;i<m;++i)
            {
                for(int j=0;j<m-i-1;++j)
                {
                    if(mat[k][j]<mat[k][j+1])
                    {
                        int aux=mat[k][j+1];
                        mat[k][j+1]=mat[k][j];
                        mat[k][j]=aux;
                    }
                }
            }
        }
    else if(variabila==3)
        for(int k=0;k<m;++k)
        {
            for(int i=0;i<n;++i)
            {
                for(int j=0;j<n-i-1;++j)
                {
                    if(mat[j][k]<mat[j+1][k])
                    {
                        int aux=mat[j+1][k];
                        mat[j+1][k]=mat[j][k];
                        mat[j][k]=aux;
                    }
                }
            }
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}