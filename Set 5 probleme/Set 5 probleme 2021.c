#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// 1. //////////////////////////////////////////////////////////////////////////////
// int palindrom(int n)
// {
//     int cn=n,pali=0;
//     while(cn)
//     {
//         pali=pali*10+(cn%10);
//         cn=cn/10;
//     }
//     if(pali==n)
//         return 1;
//     else return 0;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if (palindrom(n)==1)
//         printf("Numarul este palindrom");
//     else if(palindrom(n)==0)
//         printf("Numarul nu este palindrom");
// }

// 2. //////////////////////////////////////////////////////////////////////////////
// int perfect(int n)
// {
//     int suma=0;
//     for(int i=1;i<n;i++)
//     {
//         if(n%i==0)
//             suma=suma+i;
//     }
//     printf("%d",suma);
//     if(n==suma)
//         return 1;
//     else
//         return 0;
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(perfect(n))
//         printf("Numarul %d este perfect",n);
//     else
//         printf("Numarul nu este perfect");
// }

// 3. ////////////////////////////////////////////////////////////////////////////
// char analiza(int a,int b,int c)
// {
//     if(a==b&&b==c&&a==c)
//         return 'I';
//     else if(a<=b&&b<=c)
//         return 'C';
//     else if(a>=b&&b>=c)
//         return 'D';
//     else 
//         return 'N';
// }

// int main()
// {
//     int a,b,c;
//     printf("Numerele vor fi: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(analiza(a,b,c)=='C')
//         printf("Numerele sunt crescatoare");
//     else if(analiza(a,b,c)=='I')
//         printf("Numerele sunt identice");
//     else if(analiza(a,b,c)=='D')
//         printf("Numerele sunt descrescatoare");
//     else if(analiza(a,b,c)=='N')
//         printf("Numerele nu au nicio ordine");
// }

// 4.///////////////////////////////////////////////////////////////////////////////////////////

// #include<stdbool.h>

// const char* conversie(char *a,char *b,char *c)
// {
//     bool okA=false,okB=false,okC=false;
//     if(*a>='a'&&*a<='z')
//     {
//         okA=true;
//         *a=*a-32;
//     }
//     if(*b>='a'&&*b<='z')
//     {
//         okB=true;
//         *b=*b-32;
//     }
//     if(*c>='a'&&*c<='z')
//     {
//         okC=true;
//         *c=*c-32;
//     }
//     static char string[256]={};
//     if(!okA)
//     {
//         strcat(string, "Primul caracter nu poate fi transformat.\n");
//     }
//     if(!okB)
//     {
//         strcat(string, "Al doilea caracter nu poate fi transformat.\n");
//     }
//     if(!okC)
//     {
//         strcat(string, "Al treilea caracter nu poate fi transformat.\n");
//     }

//     return string;
// }


// int main()
// {
//     char a,b,c;
//     printf("Caracterele ce trebuie convertite: ");
//     scanf("%c %c %c",&a,&b,&c);
//     const char* string=conversie(&a,&b,&c);
//     printf("\n %s",string);
//     printf("\n Caracterele upper case sunt %c %c %c",a,b,c);
// }


// 5. /////////////////////////////////////////////////////////////////////////////////
// void getDigits(int n,int *digitcount, int **digits)
// {
//     int aux=n;
//     *digitcount=0;
//     while(aux)
//     {
//         (*digitcount)++;
//         aux=aux/10;
//     }
//     *digits=(int*)malloc((*digitcount)*sizeof(int));
//     aux=n;
//     for(int i=0;i<*digitcount&&aux;++i)
//     {
//         (*digits)[i]=aux%10;
//         aux=aux/10;
//     }
// }

// int main()
// {
//     int n;
//     printf("Numarul este: ");
//     scanf("%d",&n);
//     int digitcount, *digits;
//     getDigits(n,&digitcount,&digits);
//     printf("\n%d \n",digitcount);
//     for(int i=0;i<digitcount;++i)
//     {
//         printf("%d ",digits[i]);
//     }
// }

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