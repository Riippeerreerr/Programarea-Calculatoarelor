#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Numarul de elemente al vectorului: ");
    scanf("%d", &n);
    printf("Vectorul are urmatoarele elemente: ");
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    int mini = v[0], maxi = v[0], pozmax = 0, pozmin = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxi < v[i])
        {
            maxi = v[i];
            pozmax = i;
        }
        if (mini > v[i])
        {
            mini = v[i];
            pozmin = i;
        }
    }
    printf("Numarul %d este maximul si are pozitia %d, iar %d este minimul cu pozitia %d", maxi, pozmax + 1, mini, pozmin + 1);
    int l, r;
    if (pozmin < pozmax)
    {
        l = pozmin;
        r = pozmax;
    }
    else if (pozmax < pozmin)
    {
        l = pozmax;
        r = pozmin;
    }
    printf("\n pozitii initiale: %d %d ",l,r);
    if (l == r || l == r - 1 || l == r - 2)
    {
        printf("\nNu se poate!");
    }
    else
    {
        int lungime=r-l-1;
        int temp[lungime], j = 0;
        for (int i = l + 1; i < r; i++)
        {
            temp[j] = v[i];
            j++;
        }
        printf("\n Vector temp: ");
        for (int i = 0; i < r-l+1; i++)
        {
            
            printf(" %d ",temp[i]);
        }
        for (int i = 0; i < r - l - 1; i++)
        {
            for (int k = 0; k < r - l - i; k++)
            {
                if (temp[k] > temp[k + 1])
                {
                    int aux = temp[k];
                    temp[k] = temp[k + 1];
                    temp[k + 1] = aux;
                }
            }
        }
        printf("\nVector temp sortat: ");
        for (int i = 0; i < r-l+1; i++)
        {
            
            printf(" %d ",temp[i]);
        }
        j = 0;
        for (int i = l + 1; i < r; i++)
        {
            v[i] = temp[j];
            j++;
        }
        printf("\nVectorul sortat este: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", v[i]);
        }
    }
}