#include <string.h>
#include <math.h>
#include <stdio.h>

int palindrom(int n)
{
    int cn=n,pali=0;
    while(cn)
    {
        pali=pali*10+(cn%10);
        cn=cn/10;
    }
    if(pali==n)
        return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if (palindrom(n)==1)
        printf("Numarul este palindrom");
    else if(palindrom(n)==0)
        printf("Numarul nu este palindrom");
}