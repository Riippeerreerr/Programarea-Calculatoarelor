#include <stdio.h>
#include <string.h>

/* 1.
int main()
{
    char c;
    scanf("%c",&c);
    if(((int)c>=97)&&((int)c<=122))
        printf("Este litera mica");
    else if(((int)c>=65)&&((int)c<=90))
        printf("Este litera mare");
    else if(((int)c>=48)&&((int)c<=57))
        printf("Este cifra");
    else 
        printf("Este alt caracter");
} */

/* 2.
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        printf("Laturile pot face un triunghi ");
        if(a==b==c)
        {
            printf("echilateral ");
        }
        else if((a==b)||(a==c)||(b==c))
        {
            printf("isoscel ");
        }
        else if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(c*c)))
        {
            printf("dreptunghic ");
        }

        else
        {
            printf("oarecare ");
        }
    }
    else 
    {
        printf("Laturile nu pot face un triunghi");
    }

} */

/* 3.
int main()
{
    int n, cont=0;
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
            cont++;
    }
    if(cont==0)
        printf("Numarul este prim.");
    else 
        printf("Numarul nu este prim.");
} */

/* 4.
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            {
                printf("%d ",i);
            }
    }
} */

/* 5. fibbo
int main()
{
    int n,f1=0,f2=1,f3;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i<=1)
        {
            f3=i;
        }
        else
        {
            f3=f2+f1;
            f1=f2;
            f2=f3;
        }
        printf("%d ",f3);
    }
} */

/*
int main()
{
    int n,poz=0,neg=0;
    scanf("%d",&n);
    while(n)
    {
        if(n>0)
        {
            poz++;
        }
        else if(n<0)
        {
            neg++;
        }
        scanf("%d",&n);
    }
    printf("Exista %d numare negative si %d numere pozitive",neg,poz);
} */

/* 9.
int main()
{
    int n,sum=0,prod=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        
            prod=prod*j;
        }
        sum=sum+prod;
        prod=1;
    }
    printf("%d",sum);
} */
/* 10.
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",n%10);
        n=n/10;
    }
} */

/* 11.
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%dx%x=%d ",j,i,j*i);
        }
        printf("\n");
    }
} */

/* 12.
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int mat[i][i];
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=i;k++)
            {
                mat[k][j]=i;
                printf("%d ", mat[k][j]);
            }
            printf("\n");
        }
    }
} */

/* 13.
int main()
{
    int nr;
    scanf("%d",&nr);
    if(nr==1)
        printf("luni");
    else if(nr==2)
        printf("marti");
    else if(nr==3)
        printf("miercuri");
    else if(nr==4)
        printf("joi");
    else if(nr==5)
        printf("vineri");
    else if(nr==6)
        printf("sambata");
    else if(nr==7)
        printf("duminica");
    else 
        printf("eroare");
} */

/* 14.
int main()
{
    float nr,sum=0;
    scanf("%f",&nr);
    for(int i=1;i<=nr;i++)
        sum=sum+i;
    sum=(float)sum/nr;
    printf("%f",sum);
} */