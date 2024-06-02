//multiplicacion de matrices
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void ingresomatriz(double **matriz, int fila, int columna) {
    int i, j;
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            printf("valor en posicion %d%d: ",i,j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

void mostrarmatriz(double **matriz, int fila, int columna) {
    int i, j;
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            printf("%lf ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main()
{
long int fila1,fila2,columna1,columna2,i,j,k;
printf("ingrese filas de primera matriz: ");
scanf("%d",&fila1);
printf("ingrese columnas de primera matriz: ");
scanf("%d",&columna1);
// Crear matriz1 dinámica
    double **matriz1 = (double **)malloc(fila1 * sizeof(double *));
    for (i = 0; i < fila1; i++) {
        matriz1[i] = (double *)malloc(columna1 * sizeof(double));
    }
printf("ingrese fila de segunda matriz (no puede ser diferente de columnas de primera): ");
do
    {
    scanf("%d",&fila2);
    if(fila2!=columna1)
        printf("no se pueden multiplicar las matrices, ingresa otro valor de fila: ");
    }while(fila2!=columna1);
printf("ingrese columnas de segunda matriz: ");
scanf("%d",&columna2);
double **matriz2 = (double **)malloc(fila2 * sizeof(double *));
    for (i = 0; i < fila2; i++) {
        matriz2[i] = (double *)malloc(columna2 * sizeof(double));
    }
printf("\ningresa valores de la matriz 1:\n");
ingresomatriz(matriz1,fila1,columna1);
printf("\nmatriz 1= \n");
mostrarmatriz(matriz1,fila1,columna1);
printf("\ningresa valores de la matriz 2:\n");
ingresomatriz(matriz2,fila2,columna2);
printf("\nmatriz 2= \n");
mostrarmatriz(matriz2,fila2,columna2);
// Crear matriz3 dinámica
    double **matriz3 = (double **)malloc(fila1 * sizeof(double *));
    for (i = 0; i < fila1; i++) {
        matriz3[i] = (double *)malloc(columna2 * sizeof(double));
    }

for(i=0;i<fila1;i++)
    {
    for(j=0;j<columna2;j++)
        {
        matriz3[i][j]=0;
        for(k=0;k<fila2;k++)
            {
            matriz3[i][j]+=matriz2[k][j]*matriz1[i][k];
            }
        }
    }
printf("\nmatriz 3 (resultado)= \n");
mostrarmatriz(matriz3,fila1,columna2);
// Liberar memoria
    for (i = 0; i < fila1; i++) {
        free(matriz1[i]);
    }
    free(matriz1);
    for (i = 0; i < fila2; i++) {
        free(matriz2[i]);
    }
    free(matriz2);
    for (i = 0; i < fila1; i++) {
        free(matriz3[i]);
    }
    free(matriz3);
system("pause");
return 0;
}


