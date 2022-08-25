#include <string.h>
#include <math.h>
#include <stdio.h>
int main()
{
    int n;
    printf("Numarul de elemente al vectorului: ");
    scanf("%d",&n);
    int v[n],cont=0;
    printf("Vectorul are urmatoarele elemente: ");
    scanf("%d",&v[0]);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&v[i]);
        if(v[i]<v[i-1])
            {
                printf("\nVectorul nu este crescator!");
                break;
            }
        else
        {
            cont++;
            continue;
        }
    }
    if(cont==n-1)
        printf("\nVectorul are toate elemtenteke crescatoare");
}