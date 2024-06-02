#include <stdio.h>

int leeryvalidar(int,int);
void mostrarmatriz(int[][3],int,int);
void cargavector(int[],int);
int buscarmenor(int[],int);
void mostrarvector(int[],int );

int main()
    {
    int vec[3],pos;
    cargavector(vec,3);
    mostrarvector(vec,3);
    pos=buscarmenor(vec,3);
    printf("\nposicion con valor minimo: %d\nvalor minimo: %d",pos,vec[pos-1]);
    }
void mostrarvector(int vec[],int n)
    {
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        {
        printf("%d ",vec[i]);
        }
    }

int buscarmenor(int vec[],int n)
    {
    int i,j,pos=1,min;
    min=vec[0];
    for(i=0;i<n;i++)
        {
        for(j=0;j<n-1;j++)
            {
            if(min>vec[j+1])
                {
                min=vec[j+1];
                pos=j+2;
                }
            }
        }
    return pos;
    }

void cargavector(int vec[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&vec[i]);
        }
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
