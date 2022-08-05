#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,par=0,impar=0;
    scanf("%d",&n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
        if(v[i]%2==0)
        {
            par++;
        }
        else if(v[i]%2==1)
        {
            impar++;
        }
    }
    printf("%d %d \n",par,impar);
    int q[par],w[impar],j=0,k=0;
    for(int i=0;i<n;i++)
    {   
        
        if(v[i]%2==0)
            {
                q[j]=v[i];
                j++;
            }
        else if(v[i]%2==1)
        {
            w[k]=v[i];
            k++;
        }
    }
    for(int j=0;j<par;j++)
        printf("%d ",q[j]);
    printf("\n");
    for(int j=0;j<impar;j++)
        printf("%d ",w[j]);
}