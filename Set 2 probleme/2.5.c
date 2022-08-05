#include <stdio.h>
#include <string.h>

int main()
{
    int n,f1=0,f2=1,f3;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i<=1)
        {
            f3=i;
        }
        else
        {
            f3=f2+f1;
            f1=f2;
            f2=f3;
        }
        printf("%d ",f3);
    }
} 