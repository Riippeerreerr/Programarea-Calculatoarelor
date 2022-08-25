#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n,cont=0;
    float val_med=0;
    printf("Numarul de elemente al vectorului: ");
    scanf("%d", &n);
    int v[n];
    printf("Vectorul va avea elementele: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
        val_med=val_med+v[i];
    }
    int min=v[0];
    val_med=(float)(val_med/n);
    printf("Valoarea medie a vectorului este: %f",val_med);
    for(int i=0;i<n;i++)
    {
        if(v[i]==val_med)
        {
            cont++;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]<min)
        {
            min=v[i];
        }
    }
    printf("\nValoarea minima a vectorului este %d si se afla pe pozitia ",min);
    for(int i=0;i<n;i++)
    {
        if(v[i]==min)
            printf("%d ",i);
    }
    if(cont!=0)
    {
        printf("\nValorea medie a vectorului se afla in vector.\n");
    }
    else
    {
        printf("\nValorea medie a vectorului nu se afla in vector.\n");
    }
    
}