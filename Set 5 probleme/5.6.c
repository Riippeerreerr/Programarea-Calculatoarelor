#include <string.h>
#include <math.h>
#include <stdio.h>

void cifrepare(int n,int m)
{
    int cn=n,cm=m;
    int contpare=0,cif=0;
    while(cm)
    {
        cif++;
        cm=cm/10;
    }
    cm=m;
    while(cn)
    {
        if(cn%2==0)
        {
            contpare++;
        }
        cn=cn/10;
    }
    cn=n;
    int vecn[contpare],vecm[cif];
    int i=0;
    while(cn)
    {
        if(cn%2==0)
        {
            vecn[i]=cn%10;
            i++;
        }
        cn=cn/10;
    }
    for(int i=0;i<contpare-1;i++)
    {
        for(int j=0;j<contpare-i-1;j++)
        {
            if(vecn[j]>vecn[j+1])
            {
                int aux=vecn[j];
                vecn[j]=vecn[j+1];
                vecn[j+1]=aux;
            }
        }
    }
    cn=n;
    for(int i=0;i<cif;i++)
    {
        vecm[i]=cm%10;
        cm=cm/10;
    }
    for(int i=0;i<cif-1;i++)
    {
        for(int j=0;j<cif-i-1;j++)
        {
            if(vecm[j]>vecm[j+1])
            {
                int aux=vecm[j];
                vecm[j]=vecm[j+1];
                vecm[j+1]=aux;
            }
        }
    }
    cm=m;
    int cont=1;
    for(int i=0;i<cif;i++)
    {
        if(vecm[i]==vecn[i])
            continue;
        else
            cont=0;
    }
    if(cont)
        {
            printf("Numarul obtinut din %d este %d",n,m);
        }
    else
    {
        printf("Numarul %d nu poate fi obtinut din %d",m,n);
    }

}

int main()
{
    int n,m;
    printf("Numarul primar va fi ");
    scanf("%d",&n);
    printf("Iar numarul \"creat\" va fi ");
    scanf("%d",&m);
    cifrepare(n,m);
}