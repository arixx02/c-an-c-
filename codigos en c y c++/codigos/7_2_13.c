#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int leeryvalidar(int,int);
int verificartabla(char[][3],int);

int main()
    {
    while(1){
    printf("\n");
    printf("-------\n");
    char mat[3][3];
    int i,j,k,fila=1,colum=1;
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            {
            mat[i][j]='N';
            }
        }
    i=0;
    while(i<9)
        {
        for(j=0;j<3;j++)
            {
            for(k=0;k<3;k++)
                {
                printf("%c ",mat[j][k]);
                }
            printf("\n");
            }
        do
            {
            printf("ingrese fila: ");
            fila=leeryvalidar(1,3);
            printf("ingrese columna: ");
            colum=leeryvalidar(1,3);
            if(mat[fila-1][colum-1]!='N')
                printf("\nya se jugo en esa posicion\n");
            }while(mat[fila-1][colum-1]!='N');
        if(i%2==0)mat[fila-1][colum-1]='O';
        if(i%2!=0)mat[fila-1][colum-1]='X';
        if(verificartabla(mat,3)==1)
            {
            i=10;
            for(j=0;j<3;j++)
                {
                for(k=0;k<3;k++)
                    {
                    printf("%c ",mat[j][k]);
                    }
                printf("\n");
                }
            }
        i++;
        }
    if(i==9)printf("\nEMPATE\n");
    }
    }

int verificartabla(char mat[][3],int n)
    {
    int band=0,i,j,acumo=0,acumx=0;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(mat[i][j]=='O')
                {
                acumo++;
                }
            if(mat[i][j]=='X')
                {
                acumx++;
                }
            }
        if(acumo==n)
            {
            printf("GANA EL JUGADOR 1\n");
            band=1;
            i=n;
            }
        if(acumx==n)
            {
            printf("GANA EL JUGADOR 2\n");
            band=1;
            i=n;
            }
        acumo=0;
        acumx=0;
        }
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(mat[j][i]=='O')
                {
                acumo++;
                }
            if(mat[j][i]=='X')
                {
                acumx++;
                }
            }
        if(acumo==n)
            {
            printf("GANA EL JUGADOR 1\n");
            band=1;
            i=n;
            }
        if(acumx==n)
            {
            printf("GANA EL JUGADOR 2\n");
            band=1;
            i=n;
            }
        acumo=0;
        acumx=0;
        }
    for(i=0;i<n;i++)
        {
        for(j=i;j<i+1;j++)
            {
            if(mat[i][j]=='O')
                {
                acumo++;
                }
            if(mat[i][j]=='X')
                {
                acumx++;
                }
            }
        }
    if(acumo==n)
            {
            printf("GANA EL JUGADOR 1\n");
            band=1;
            i=n;
            }
        if(acumx==n)
            {
            printf("GANA EL JUGADOR 2\n");
            band=1;
            i=n;
            }
        acumo=0;
        acumx=0;
        j=2;
    for(i=0;i<n;i++)
        {
        if(mat[i][j]=='O')
            {
            acumo++;
            }
        if(mat[i][j]=='X')
            {
            acumx++;
            }
        j--;
        }
    if(acumo==n)
        {
        printf("GANA EL JUGADOR 1\n");
        band=1;
        i=n;
        }
    if(acumx==n)
        {
        printf("GANA EL JUGADOR 2\n");
        band=1;
        i=n;
        }
    return band;
    }

int leeryvalidar(int linf,int lsup)
    {
    int n;
    do
        {
        scanf("%d",&n);
        }while(n<linf || n>lsup);
    return n;
    }
