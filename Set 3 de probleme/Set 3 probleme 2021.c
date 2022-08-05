#include <stdio.h>
#include <string.h>
#include <math.h>

/* pointer reprezinta o adresa de memorie: int *p initializez ca variabila pointer
 p=&k se atribuie lui p valorea-adresa variabilei k
 m=*p se atribuie lui m valorea de tip int ce se afla in adresa lui p(continutul lui p)
 Cand se opereaza cu variabile ce se schimba in functii se lucreaza cu pointeri
 ex: void permuta(int *x,int *y)
 {
    int t;
    t=*x; *x=*y; *y=t; return; 
 } 
 permuta(&a,&b);
 qsort() merge pt vectori de orice tip #include <stdlib.h> */

/* 1. /////////////////////////////////////////////////////
int main()
{
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    int prag;
    scanf("%d",&prag);
    for(int i=0;i<n;i++)
    {
        if(v[i]>prag)
        {
            printf("%d este un element ce depaseste pragul si se afla pe pozitia %d \n",v[i],i);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",v[i]);
        }
    }
    printf("\n");
    int poz;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            poz=i;
            for(int j=poz;j<n;j++)
            {
                v[j]=v[j+1];
            }
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int div=0;
        for(int j=1;j<=sqrt(v[i]);j++)
        {
            if(v[i]%j==0)
            {
                div++;
                if(j!=v[i]/j)
                    div++;
            }
        }
        v[i]=div;
        printf("%d ",v[i]);
    }
} */

/* 2. //////////////////////////////////////////////////////////////////////
int main()
{
    int n,par=0,impar=0;
    scanf("%d",&n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
        if(v[i]%2==0)
        {
            par++;
        }
        else if(v[i]%2==1)
        {
            impar++;
        }
    }
    printf("%d %d \n",par,impar);
    int q[par],w[impar],j=0,k=0;
    for(int i=0;i<n;i++)
    {   
        
        if(v[i]%2==0)
            {
                q[j]=v[i];
                j++;
            }
        else if(v[i]%2==1)
        {
            w[k]=v[i];
            k++;
        }
    }
    for(int j=0;j<par;j++)
        printf("%d ",q[j]);
    printf("\n");
    for(int j=0;j<impar;j++)
        printf("%d ",w[j]);
} */

/* 3. /////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int n,max=0,ap;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n;i++)
    {
        ap=1;
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
                ap++;
        }
        if(ap>max)
            max=ap;
    }
    printf("Elementele urmatoare apar de cele mai multe ori(%d): ",max);
    for(int i=0;i<n;i++)
    {
        ap=1;
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                ap++;
            }
        }
        if(ap==max)
            printf("%d ",v[i]);
    }
} */

/* 4. ////////////////////////////////////////////////////////////////////////
int main()
{
    int n,aux;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
    }
    int testare=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            testare++;
        }
    }
    if(testare==0)
    {
        printf("Toate elementele sunt la fel");
    }
    else if(testare==n-1)
    {
        printf("Toate elementele sunt diferite");
    }
    else if(testare>0&&testare<n-1)
    {
        printf("Elementele sunt oarecare");
    }
} */

/* 8. ////////////////////////////////////////////////////////////////////////////////
int main()
{
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int a[m][n], b[p][q];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    if(m!=p&&n!=q)
        printf("Nu se pot aduna matricele!\n");
    else if(m==p&&n==q)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a[i][j]=a[i][j]+b[i][j];
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n");
    if(n!=p)
    {
        printf("Nu se pot inmulti matricele!");
    }
    else if(n==p)
    {
        int c[m][q];
        for(int i=0;i<m;i++)
            {
                for(int j=0;j<q;j++)
                {
                    c[i][j]=0;
                    for(int k=0;k<p;k++)
                    {
                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    }
                }
            }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
} */

/* 9. ////////////////////////////////////////////////////////////////////////
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int v[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }
    int aux=0;
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    for(int i=0;i<n;i++)
    {
            aux=v[i][c2];
            v[i][c2]=v[i][c1];
            v[i][c1]=aux;
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
} */

/* 6. /////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int n,p,directie,aux=0;
    printf("Cate numere sa aiba vectorul? ");
    scanf("%d",&n);
    int v[n];
    printf("Cu cate pozitii sa se permute vectorul? ");
    scanf("%d",&p);
    printf("In ce directie sa se permute vectorul? Stanga=1 Dreapta=\\0 ");
    scanf("%d",&directie);
    for(int i=0;i<n;i++)
    {
        printf("Elementul %d: ",i);
        scanf("%d",&v[i]);
    }
    printf("Vectorul neschimbat: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    printf("\nVectorul schimbat: ");
    while(p)
    {
        if(directie==1)
        {
            aux=v[0];
            for(int i=0;i<n-1;i++)
            {
                v[i]=v[i+1];
            }
            v[n-1]=aux;
        }
        else if(directie!=1)
        {
            aux=v[n-1];
            for(int i=n-1;i>0;i--)
            {
                v[i]=v[i-1];
            }
            v[0]=aux;
        }
        p--;
    }
    for(int i=0;i<n;i++)
        printf("%d ",v[i]);
} */

/* 7. ////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int n;
    printf("Dimensiunea matricei:");
    scanf("%d",&n);
    int v[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }
    printf("Matricea arata asa:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\nValorile de pe diagonala principala sunt: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                printf("%d ",v[i][j]);
        }
    }
    printf("\nValorile de pe diagonala secundara sunt: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))
                printf("%d ",v[i][j]);
        }
    }
    printf("\nValorile din tringhiul superior sunt:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
                printf("%d ",v[i][j]);
        }
    }
    printf("\nValorile din tringhiul inferior sunt:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
                printf("%d ",v[i][j]);
        }
    }
    printf("\nExteriorul matricei este:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
                printf("%d ",v[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\nInteriorul matricei este:\n");
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\nMatricea citita in spirala:\n");
    int rowind=0,colind=0,cn=n;
    while(rowind<cn&&colind<n)
    {
        for(int i=colind;i<n;++i)
        {
            printf("%d ",v[rowind][i]);
        }
        rowind++;
        for(int i=rowind;i<cn;++i)
        {
            printf("%d ",v[i][n-1]);
        }
        n--;
        if(rowind<cn)
        {
            for(int i=n-1;i>=colind;--i)
            {
                printf("%d ",v[cn-1][i]);
            }
            cn--;
        }
        if(colind<n)
        {
            for(int i=cn-1;i>=rowind;--i)
            {
                printf("%d ",v[i][colind]);
            }
            colind++;
        }
    }
} */

/* 5. //////////////////////////////////////////////////////////////////////////
int main()
{
    int n,cont;
    scanf("%d",&n);
    int v[n];
    printf("Elementele vectorului sunt: ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&v[i]);
        printf("%d ",v[i]);
    }
    printf("\nElemtele unice din vector sunt:");
    for(int i=0;i<n;i++)
    {
        cont=0;
        for(int j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(v[i]==v[j])
                {
                    cont++;
                }
            }
        }
        if(cont==0)
        {
            printf("%d ",v[i]);
        }
    }
}
*/