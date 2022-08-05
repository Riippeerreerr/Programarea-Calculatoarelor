#include <stdio.h>
#include <string.h>

int main()
{
    int n,sum=0,prod=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        
            prod=prod*j;
        }
        sum=sum+prod;
        prod=1;
    }
    printf("%d",sum);
}