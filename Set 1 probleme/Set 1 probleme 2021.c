/* a+=b == a=a+b
/*isdigit() returneaza daca un caracter e cifra sau nu -> include <ctype.h>
/* getchar() baga de la tastatura caractere si le baga in char/ putchar pune caractere din char in output
/* daca pui (float) inainte de o expresie matematica cu int dai cast si iti fce rezultat float
/*
/*/

#include <stdio.h>
#include <string.h>
/* 1. 
int main()
{
    char c;
    scanf("%c", &c);
    printf("Codul ASCII al caracterului %c =%d \n", c,c);
    printf("Codul ASCII al caracterului %c =%d \n" , c+1,c+1);
    printf("%c%c%c%c%c \n", 'a','a'+1,'a'+2,'a'+3,'a'+4);
    printf("%c", 'A'+16);
}
*/

/* 2.
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
 */
/* 3.
int main()
{
    int nr,c,cnr;
    scanf("%d", &nr);
    cnr=nr;
    printf("%d \n",nr);
    do
    {
        c=nr%8;
        printf("%d",c);
        nr/=8;
    } while (nr!=0);
    printf("\n");
    do
    {
        c=cnr%16;
        printf("%d",c);
        cnr/=16;
    } while (nr!=0);
    printf("\n");
}
*/

/* 4.
int main()
{
    printf("Numarul de octeti folosit de char=%d \n",sizeof(char));
    printf("Numarul de octeti folosit de unsigned char=%d \n",sizeof(unsigned char));
    printf("Numarul de octeti folosit de int=%d \n",sizeof(int));
    printf("Numarul de octeti folosit de unsigned int=%d \n",sizeof(unsigned int));
    printf("Numarul de octeti folosit de long int=%d \n",sizeof(long int));
    printf("Numarul de octeti folosit de usigned long=%d \n",sizeof(unsigned long));
    printf("Numarul de octeti folosit de int=%d \n",sizeof(int));
    printf("Numarul de octeti folosit de float=%d \n",sizeof(float));
    printf("Numarul de octeti folosit de double=%d  \n",sizeof(double));
    printf("Numarul de octeti folosit de long double=%d",sizeof(long double));
}
*/

/* 5.
int main()
{
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    printf("Suma %f+%f=%f \n",a,b,a+b);
    printf("Suma %f+%f=%f \n",a,c,a+c);
    printf("Suma %f+%f=%f \n",b,c,b+c);
}
*/

/* 6.
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Perimtru: %d",(a+b)*2);
} */

/* 7.
int main()
{
    int nr;
    scanf("%d", &nr);
    printf(" %d %d %d \n %d \n %d \n %d \n",nr-1,nr,nr+1,nr-1,nr,nr+1);
} */

/* 8.
int main()
{
    printf("*\n**\n***");
    char c;
    scanf("%c",&c);
    printf("%c \n%c%c\n%c%c%c",c,c,c,c,c,c);
} */

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int aux=b;
    b=a;
    a=aux;
    printf("a=%d \n",a);
    printf("b=%d \n",b);
    printf("media=%f",(float)(a+b)/2);
}
/* https://curs.upb.ro/2021/pluginfile.php/257627/mod_resource/content/3/P_Laborator_S1_v3_DS_AD_PCLP.pdf */