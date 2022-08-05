#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,cont;
    scanf("%d",&n);
    int v[n];
    printf("Elementele vectorului sunt: ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&v[i]);
        printf("%d ",v[i]);
    }
    printf("\nElemtele unice din vector sunt:");
    for(int i=0;i<n;i++)
    {
        cont=0;
        for(int j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(v[i]==v[j])
                {
                    cont++;
                }
            }
        }
        if(cont==0)
        {
            printf("%d ",v[i]);
        }
    }
}