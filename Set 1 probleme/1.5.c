#include <stdio.h>
#include <string.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    printf("Suma %f+%f=%f \n",a,b,a+b);
    printf("Suma %f+%f=%f \n",a,c,a+c);
    printf("Suma %f+%f=%f \n",b,c,b+c);
}