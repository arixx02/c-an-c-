#include <stdio.h>
#include <string.h>
#include <conio.h>

struct neumaticos
    {
    char cod[6];
    float precio;
    char desc[31];
    int cantmesant;
    float impmesant;
    };

int main()
    {
    struct neumaticos ventas[2];
    int i=0, cant=1,acumproductos=0;
    char codigo[6];
    while(ventas[i].desc!="FIN" && i<2)
        {
        printf("ingrese codigo de producto: ");
        fflush(stdin);
        do
            {
            gets(ventas[i].cod);
            }while(strlen(ventas[i].cod)>5 );
        fflush(stdin);
        printf("ingrese precio: ");
        do
            {
            scanf("%f",&ventas[i].precio);
            }while(ventas[i].precio<1);
        printf("ingrese descripcion del producto: ");
        fflush(stdin);
        gets(ventas[i].desc);
        fflush(stdin);
        if(ventas[i].desc!="FIN")
            {
            printf("ingrese la cantidad vendida el mes anterior: ");
            scanf("%d",&ventas[i].cantmesant);
            ventas[i].impmesant=ventas[i].cantmesant*ventas[i].precio;
            acumproductos++;
            }
        i++;
        }
    for(i=0;i<2;i++)
        {
        ventas[i].cantmesant=0;
        ventas[i].impmesant=0;
        }
    while(cant!=0)
        {
        printf("ingrese codigo del producto a actualizar: ");
        fflush(stdin);
        do
            {
            gets(codigo);
            }while(strlen(codigo)>5);
        fflush(stdin);
        printf("ingrese cantidad vendida: ");
        do
            {
            scanf("%d",&cant);
            }while(cant<0);
        if(cant!=0)
            {
            for(i=0;i<2;i++)
                {
                if(strcmp(ventas[i].cod,codigo)==0)
                    {
                    ventas[i].cantmesant+=cant;
                    ventas[i].impmesant=ventas[i].precio*cant;
                    }
                }
            }
        }
    printf("descripcion\tcantidad de unidades vendida\timporte total vendido\n");
    for(i=0;i<2;i++)
        {
        printf("%s\t%d\t$%f\n",ventas[i].desc,ventas[i].cantmesant,ventas[i].impmesant);
        }
    return 0;
    }
