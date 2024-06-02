#include <stdio.h>

void cargarmatriz(float[][3],int,int);
void mostrarmatriz(float[][3],int,int);

int main()
    {
    float mat[3][3];
    cargarmatriz(mat,3,3);
    mostrarmatriz(mat,3,3);
    return 0;
    }

void cargarmatriz(float mat[][3],int filas, int colum)
    {
    int i, j;
    for(i=0;i<filas;i++)
        {
        for(j=0;j<colum;j++)
            {
            printf("\ningrese el valor de la posicion %d,%d: ",i+1,j+1);
            scanf("%f",&mat[i][j]);
            }
        }
    }

void mostrarmatriz(float mat[][3],int filas,int colum)
    {
    int i,j;
    for(i=0;i<filas;i++)
        {
        for(j=0;j<colum;j++)
            {
            printf("%*.2f ",25,mat[i][j]);
            }
        printf("\n");
        }
    }

