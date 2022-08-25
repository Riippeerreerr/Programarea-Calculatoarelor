#include <string.h>
#include <math.h>
#include <stdio.h>
int main()
{
    int n;
    printf("Marimea matricii va fi de ");
    scanf("%d",&n);
    printf("Elementele matricii sunt: ");
    int v[n][n],cv[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&v[i][j]);
            cv[i][j]=v[i][j];
        }
    }
    int max=v[0][0],min=v[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j]>max)
                max=v[i][j];
            if(v[i][j]<min)
                min=v[i][j];
        }
    }
    printf("Valoarea maxima din matrice este %d iar valoarea minima este %d. \n",max,min);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                v[i][j]=max;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(n-j-1<i)
            {
                cv[i][j]=min;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;(j<n);j++)
        {
            printf("%d ",cv[i][j]);
        }
        printf("\n");
    }
}