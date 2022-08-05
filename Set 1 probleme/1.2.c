#include <stdio.h>
#include <string.h>

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%0.3f %0.3f \n",a,b);
    printf("%0.5f %0.5f \n",a,b);
    printf("%0.2f %0.2f \n",a,b);
    int sum=a+b;
    printf("%d \n",sum);
    float c=5;
    printf("%0.3f",c);
}