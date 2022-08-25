#include <string.h>
#include <math.h>
#include <stdio.h>

/* 1. ///////////////////////////////////////////////////////////////////////////
int main()
{
    int n,cont=0,plus=0,minus=0;
    printf("Vectorul are numarul de elemente: ");
    scanf("%d",&n);
    int v[n];
    printf("Vectorul are urmatoarele elemente: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        printf("%d ",v[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        if(v[i-1]==v[i]==v[i+1])
        {
            cont++;
        }
        else
        {
            if(v[i]<=v[i+1])
            {
                plus++;
            }
            else if(v[i>=v[i+1]])
            {
                minus++;
            }
        }
    }
    if(cont==n-2)
            printf("Vectorul este constant.\n");
    else if(plus==0)
    {
        printf("Vecotrul este descrescator\n");
    }
    else if(minus==0)
    {
        printf("Vectorul este crescator\n");
    }
    else if(plus!=0&&minus!=0)
    {
        printf("Vectorul este oarecare\n");
    }
} */

/* 2. /////////////////////////////////////////////////////////////////////////
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

} */

/* 3. ///////////////////////////////////////////////////////////////////////
int main()
{
    int n, copielungime=0,st=0,lungime=0;
    printf("Numarul de elemente din vector: ");
    scanf("%d",&n);
    int v[n],c[n];
    printf("Vectorul are urmatoarele elemente: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i+1]>=v[i])
        {
            lungime++;
            if(lungime>copielungime)
            {
                copielungime=lungime;
                st=i+1-lungime;
            }
        }
        else
        {
            copielungime=lungime;
            lungime=0;
        }
    }
    printf("\nSectiunea cea mai lunga secventa crescatoare este: ");
    for (int i = 0; i <= copielungime; i++)
    {
        c[i]=v[st+i];
        printf("%d ",c[i]);
    }
} */

/* 4. ///////////////////////////////////////////////////////////////////////////
int main()
{
    int n,m,imp1=0,imp2=0,imp3;
    printf("Marimea primului vector: ");
    scanf("%d",&n);
    printf("Marimea celui de-al doilea vector: ");
    scanf("%d",&m);
    int v[n],w[m];
    printf("Elementele primului vector: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
        if(v[i]%2==1)
        {
            imp1++;
        }
    }
    printf("Elementele celui de-al doilea vector: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&w[i]);
        if(w[i]%2==1)
        {
            imp2++;
        }
    }
    imp3=imp1+imp2;
    int x[imp3];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==1)
        {
            x[j]=v[i];
            j++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(w[i]%2==1)
        {
            x[j]=w[i];
            j++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                int aux=x[j+1];
                x[j+1]=x[j];
                x[j]=aux;
            }
        }
    }
    printf("Elementele impare ale vectorului sunt: ");
    for(int i=0;i<imp3;i++)
    {
        printf("%d ",x[i]);
    }
} */

/* 5. ///////////////////////////////////////////////////////////////////////
int main()
{
    int n;
    printf("Numarul de elemente din vector: ");
    scanf("%d",&n);
    int v[n];
    printf("Elementele vectorului sunt: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    printf("\nVectorul descrescator este: ");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]<v[j+1])
            {
                int aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
} */

/* 6. /////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int n;
    printf("Marimea matricii va fi de ");
    scanf("%d",&n);
    printf("Elementele matricii sunt: ");
    int v[n][n],cv[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&v[i][j]);
            cv[i][j]=v[i][j];
        }
    }
    int max=v[0][0],min=v[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j]>max)
                max=v[i][j];
            if(v[i][j]<min)
                min=v[i][j];
        }
    }
    printf("Valoarea maxima din matrice este %d iar valoarea minima este %d. \n",max,min);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                v[i][j]=max;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(n-j-1<i)
            {
                cv[i][j]=min;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;(j<n);j++)
        {
            printf("%d ",cv[i][j]);
        }
        printf("\n");
    }
} */

/* 7. ///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int n,m;
    printf("Dimensiunile matricei sunt:");
    scanf("%d",&n);
    scanf("%d",&m);
    int v[n][m];
    printf("Elementele matricei sunt:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }
    for(int i=0;i<n;i=i+2)
    {
        for(int j=0;j<m;j++)
        {
            int temp=0;
            if(v[i][j]%2==1)
                continue;
            for(int k=j+1;k<m;k++)
            {
                if(v[i][k]%2==0)
                {
                    if(v[i][j]>v[i][k])
                    {
                        temp=v[i][j];
                        v[i][j]=v[i][k];
                        v[i][k]=temp;
                    }
                }
            }
        }
    }
    printf("Matricea sortata dupa nr pare pe liniile pare:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
} */

/* 11. //////////////////////////////////////////////////////////////////////////////////
int main()
{
    int n,m,variabila;
    printf("Dimensiunile matricii vor fi: ");
    scanf("%d%d",&n,&m);
    printf("Matricea va avea urmatoarele elemente:");
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matricea este de forma:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Ce actiuni doriti sa efectuati?\n0-crescator pe linii \n1-crescator pe coloane\n2-descrescator pe linii \n3-descrescator pe coloane ");
    scanf("%d",&variabila);
    if(variabila==0)
        for(int k=0;k<n;++k)
        {
            for(int i=0;i<m;++i)
            {
                for(int j=0;j<m-i-1;++j)
                {
                    if(mat[k][j]>mat[k][j+1])
                    {
                         int aux=mat[k][j+1];
                        mat[k][j+1]=mat[k][j];
                        mat[k][j]=aux;
                    }
                }
            }
        }
    else if(variabila==1)
        for(int k=0;k<m;++k)
        {
            for(int i=0;i<n;++i)
            {
                for(int j=0;j<n-i-1;++j)
                {
                    if(mat[j][k]>mat[j+1][k])
                    {
                        int aux=mat[j+1][k];
                        mat[j+1][k]=mat[j][k];
                        mat[j][k]=aux;
                    }
                }
            }
        }
    else if(variabila==2)
        for(int k=0;k<n;++k)
        {
            for(int i=0;i<m;++i)
            {
                for(int j=0;j<m-i-1;++j)
                {
                    if(mat[k][j]<mat[k][j+1])
                    {
                        int aux=mat[k][j+1];
                        mat[k][j+1]=mat[k][j];
                        mat[k][j]=aux;
                    }
                }
            }
        }
    else if(variabila==3)
        for(int k=0;k<m;++k)
        {
            for(int i=0;i<n;++i)
            {
                for(int j=0;j<n-i-1;++j)
                {
                    if(mat[j][k]<mat[j+1][k])
                    {
                        int aux=mat[j+1][k];
                        mat[j+1][k]=mat[j][k];
                        mat[j][k]=aux;
                    }
                }
            }
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
} */

// 8,bag pula in ea//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// int main()
// {
//     int n;
//     printf("Numarul de elemente al vectorului: ");
//     scanf("%d", &n);
//     printf("Vectorul are urmatoarele elemente: ");
//     int v[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &v[i]);
//     }
//     int mini = v[0], maxi = v[0], pozmax = 0, pozmin = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (maxi < v[i])
//         {
//             maxi = v[i];
//             pozmax = i;
//         }
//         if (mini > v[i])
//         {
//             mini = v[i];
//             pozmin = i;
//         }
//     }
//     printf("Numarul %d este maximul si are pozitia %d, iar %d este minimul cu pozitia %d", maxi, pozmax + 1, mini, pozmin + 1);
//     int l, r;
//     if (pozmin < pozmax)
//     {
//         l = pozmin;
//         r = pozmax;
//     }
//     else if (pozmax < pozmin)
//     {
//         l = pozmax;
//         r = pozmin;
//     }
//     printf("\n pozitii initiale: %d %d ",l,r);
//     if (l == r || l == r - 1 || l == r - 2)
//     {
//         printf("\nNu se poate!");
//     }
//     else
//     {
//         int lungime=r-l-1;
//         int temp[lungime], j = 0;
//         for (int i = l + 1; i < r; i++)
//         {
//             temp[j] = v[i];
//             j++;
//         }
//         printf("\n Vector temp: ");
//         for (int i = 0; i < r-l+1; i++)
//         {
            
//             printf(" %d ",temp[i]);
//         }
//         for (int i = 0; i < r - l - 1; i++)
//         {
//             for (int k = 0; k < r - l - i; k++)
//             {
//                 if (temp[k] > temp[k + 1])
//                 {
//                     int aux = temp[k];
//                     temp[k] = temp[k + 1];
//                     temp[k + 1] = aux;
//                 }
//             }
//         }
//         printf("\nVector temp sortat: ");
//         for (int i = 0; i < r-l+1; i++)
//         {
            
//             printf(" %d ",temp[i]);
//         }
//         j = 0;
//         for (int i = l + 1; i < r; i++)
//         {
//             v[i] = temp[j];
//             j++;
//         }
//         printf("\nVectorul sortat este: ");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d ", v[i]);
//         }
//     }
// }

// 9.///////////////////////////////////////////////////////////////////////////////
// int main()
// {
//     int n;
//     printf("Numarul de elemente al vectorului: ");
//     scanf("%d",&n);
//     int v[n],cont=0;
//     printf("Vectorul are urmatoarele elemente: ");
//     scanf("%d",&v[0]);
//     for(int i=1;i<n;i++)
//     {
//         scanf("%d",&v[i]);
//         if(v[i]<v[i-1])
//             {
//                 printf("\nVectorul nu este crescator!");
//                 break;
//             }
//         else
//         {
//             cont++;
//             continue;
//         }
//     }
//     if(cont==n-1)
//         printf("\nVectorul are toate elemtenteke crescatoare");
// }

int main()
{
    int n;
    printf("Vectorul va avea numarul de elemente: ");
    scanf("%d",&n);
    int v[n];
    printf("Vectorul va avea urmatoarele elemente: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
    }
    int p;
    printf("Vectorul de pozitii va avea numarul de elemente: ");
    scanf("%d",&p);
    int poz[p];
    printf("Vectorul va avea urmatoarele elemente: ");
    for (int i = 0; i < p; i++)
    {
        scanf("%d",&poz[i]);
    }
    printf("Elementele cerute sunt: ");
    for(int i=0;i<p;i++)
    {
        printf("%d ",v[poz[i]]);
    }    
}