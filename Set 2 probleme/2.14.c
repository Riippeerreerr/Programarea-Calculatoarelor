#include <stdio.h>
#include <string.h>

int main()
{
    float nr,sum=0;
    scanf("%f",&nr);
    for(int i=1;i<=nr;i++)
        sum=sum+i;
    sum=(float)sum/nr;
    printf("%f",sum);
}