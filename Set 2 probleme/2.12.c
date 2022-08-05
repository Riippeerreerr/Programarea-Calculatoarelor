#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int mat[i][i];
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=i;k++)
            {
                mat[k][j]=i;
                printf("%d ", mat[k][j]);
            }
            printf("\n");
        }
    }
}