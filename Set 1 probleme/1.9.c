#include <stdio.h>
#include <string.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int aux=b;
    b=a;
    a=aux;
    printf("a=%d \n",a);
    printf("b=%d \n",b);
    printf("media=%f",(float)(a+b)/2);
}