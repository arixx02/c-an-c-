#include <stdio.h>

int leeryvalidar(int,int);
void mostrarmatriz(int[][3],int,int);

int main()
    {
    int mat[3][3]={{0}}, fila=1,colum,cant;
    while(fila!=0)
        {
        printf("ingrese la fila (ingrese un 0 para terminar): ");
        fila=leeryvalidar(0,3);
        if(fila!=0)
            {
            printf("ingrese la columna: ");
            colum=leeryvalidar(1,3);
            do
                {
                printf("ingrese la cantidad a sumar: ");
                scanf("%d",&cant);
                }while(cant<0);
            mat[fila-1][colum-1]+=cant;
            }
        }
    mostrarmatriz(mat,3,3);
    }

void mostrarmatriz(int mat[][3],int fila,int colum)
    {
    int i,j;
    for(i=0;i<fila;i++)
        {
        for(j=0;j<colum;j++)
            {
            printf("%20d ",mat[i][j]);
            }
        printf("\n");
        }
    }

int leeryvalidar(int linf,int lsup)
    {
    int n;
    do
        {
        scanf("%d",&n);
        if(n<linf || n>lsup)printf("\nvalor invalido, ingrese otro valor\n");
        }while(n<linf || n>lsup);
    }
