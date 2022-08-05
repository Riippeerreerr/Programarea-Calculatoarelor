#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,max=0,ap;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n;i++)
    {
        ap=1;
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
                ap++;
        }
        if(ap>max)
            max=ap;
    }
    printf("Elementele urmatoare apar de cele mai multe ori(%d): ",max);
    for(int i=0;i<n;i++)
    {
        ap=1;
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                ap++;
            }
        }
        if(ap==max)
            printf("%d ",v[i]);
    }
}