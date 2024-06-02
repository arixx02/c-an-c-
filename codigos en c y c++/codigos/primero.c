#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define PI 3.1415

//void cargavector(float []);
//void mostrarvector(float[]);

int main()
    {
    int band=1, i, j, k, factor=2;
    char vocal;
    while(band)
        {
        printf("\ningrese una vocal y la f para terminar: ");
        scanf("%c",&vocal);
        printf("ingrese un factor de multiplicacion (numero entero): ");
        do
            {
            if(factor<1)printf("ingrese un factor valido: ");
            scanf("%d",&factor);
            }while(factor<1);
        fflush(stdin);
        vocal=toupper(vocal);
        printf("\n");
        switch(vocal)
            {
            case 'A':
                for(i=0;i<factor*5;i++)
                    {
                    for(j=0;j<factor*4;j++)
                        {
                        if(i==0)printf("A");
                        if(i==factor+1)printf("A");
                        }
                    if(i!=factor+1 && i!=0)
                            {
                            printf("A");
                            for(k=0;k<(factor*4)-2;k++)printf(" ");
                            printf("A");
                            }
                    printf("\n");
                    }
                break;
            case 'E':
                for(i=0;i<factor*5;i++)
                    {
                    for(j=0;j<factor*4;j++)
                        {
                        if(i==0)printf("E");
                        if(i==((factor*5)-1)/2)printf("E");
                        if(i==(factor*5)-1)printf("E");
                        }
                    if(i!=((factor*5)-1)/2 && i!=0 && i!=(factor*5)-1)
                            {
                            printf("E");
                            }
                    printf("\n");
                    }
                break;
            case 'I':
                for(i=0;i<factor*5;i++)
                    {
                    printf("I");
                    printf("\n");
                    }
                break;
            case 'O':
                for(i=0;i<factor*5;i++)
                    {
                    for(j=0;j<factor*4;j++)
                        {
                        if(i==0)printf("O");
                        if(i==(factor*5)-1)printf("O");
                        }
                    if(i!=(factor*5)-1 && i!=0)
                            {
                            printf("O");
                            for(k=0;k<(factor*4)-2;k++)printf(" ");
                            printf("O");
                            }
                    printf("\n");
                    }
                break;
            case 'U':
                for(i=0;i<factor*5;i++)
                    {
                    for(j=0;j<factor*4;j++)
                        {
                        if(i==(factor*5)-1)printf("U");
                        }
                    if(i!=(factor*5)-1)
                            {
                            printf("U");
                            for(k=0;k<(factor*4)-2;k++)printf(" ");
                            printf("U");
                            }
                    printf("\n");
                    }
                break;
            case 'F':
                band=0;
                break;
            default:
                printf("\nno se ingreso una vocal\n");
                band=1;
            }
        }
    return 0;
    }

/*tabla del 9
int i, j;
    for(i=1;i<=9;i++)
        {
        for(j=1;j<=9;j++)
            {
            if(i*j>=10)printf("%d ",i*j);
            else printf("%d  ",i*j);
            }
        printf("\n");
        }*/

/*void cargavector(float vec[])
    {
    int i;
    for(i=0;i<10;i++)
        {
        scanf("%f",&vec[i]);
        }
    }

void mostrarvector(float vec[])
    {
    int i;
    for(i=0;i<10;i++)
        {
        printf("%.2f ",vec[i]);
        }
    }*/

