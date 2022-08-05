#include <stdio.h>
#include <string.h>

int main()
{
    int nr,c,cnr;
    scanf("%d", &nr);
    cnr=nr;
    printf("%d \n",nr);
    do
    {
        c=nr%8;
        printf("%d",c);
        nr/=8;
    } while (nr!=0);
    printf("\n");
    do
    {
        c=cnr%16;
        printf("%d",c);
        cnr/=16;
    } while (nr!=0);
    printf("\n");
}