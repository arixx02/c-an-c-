#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct ventas
    {
    char cod[6];
    float precio;
    char desc[31];
    int cant_mesant;
    float imp_mesant;
    };

int main()
    {
    struct ventas neum[50];
    int i=1,j,band=0,cant,canti[50],pos;
    float imp[50],precio;
    char cod[6];
    do
        {
        scanf("%s",neum[0].cod);
        }while(strlen(neum[0].cod)!=5);
        scanf("%f",&neum[0].precio);
    do
        {
        scanf("%s",neum[0].desc);
        }while(strlen(neum[0].desc)<1 || strlen(neum[0].desc)>30);
    if(strlen(neum[0].desc)==3)
        {
        for(i=0;i<3;i++)
        neum[0].desc[i]=toupper(neum[0].desc[i]);
        }
    while(neum[0].desc!="FIN")
        {
        scanf("%d",&neum[0].cant_mesant);
        scanf("f",&neum[0].imp_mesant);
        }
    while(neum[i-1].desc!="FIN" && i<50)
        {
        do
            {
            scanf("%s",neum[i].cod);
            }while(strlen(neum[i].cod)!=5);
        scanf("%f",&neum[i].precio);
        do
            {
            scanf("%s",neum[i].desc);
            }while(strlen(neum[i].desc)<1 || strlen(neum[i].desc)>30);
        if(strlen(neum[0].desc)==3)
            {
            for(j=0;j<3;i++)
            neum[0].desc[j]=toupper(neum[0].desc[j]);
            }
        while(neum[i].desc!="FIN")
            {
            scanf("%d",&neum[i].cant_mesant);
            scanf("f",&neum[i].imp_mesant);
            i++;
            }
        }
    printf("ingresa codigo: ");
    do
        {
        scanf("%s",cod);
        for(i=0;i<50;i++)
            {
            if(cod==neum[i].cod)
                {
                band=1;
                pos=i;
                }
            }
        }while(band==0);
    printf("ingrese cantidad vendida este mes (0 para terminar): ");
    do{scanf("%d",&cant);}while(cant<0);
    while(cant!=0)
        {
        precio=neum[pos].imp_mesant/neum[pos].cant_mesant;
        imp[pos]+=precio*cant;
        canti[pos]+=cant;
        printf("ingresa codigo: ");
        band=0;
        do
            {
            scanf("%s",cod);
            for(i=0;i<50;i++)
                {
                if(cod==neum[i].cod)
                    {
                    band=1;
                    pos=i;
                    }
                }
            }while(band==0);
        printf("ingrese cantidad vendida este mes (0 para terminar): ");
        do{scanf("%d",&cant);}while(cant<0);
        }
    printf("descripcion\tcantidad de unidades vedidas\timporte total vendido|\n");
    for(i=0;i<50;i++)
        {
        printf("%s\t%d\t%.2f\n",neum[i].desc,canti[i],imp[i]);
        }
    }
