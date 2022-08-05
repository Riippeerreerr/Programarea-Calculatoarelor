#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    int prag;
    scanf("%d",&prag);
    for(int i=0;i<n;i++)
    {
        if(v[i]>prag)
        {
            printf("%d este un element ce depaseste pragul si se afla pe pozitia %d \n",v[i],i);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",v[i]);
        }
    }
    printf("\n");
    int poz;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            poz=i;
            for(int j=poz;j<n;j++)
            {
                v[j]=v[j+1];
            }
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int div=0;
        for(int j=1;j<=sqrt(v[i]);j++)
        {
            if(v[i]%j==0)
            {
                div++;
                if(j!=v[i]/j)
                    div++;
            }
        }
        v[i]=div;
        printf("%d ",v[i]);
    }
}