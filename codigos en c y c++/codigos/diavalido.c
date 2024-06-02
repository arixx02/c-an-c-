#include <stdio.h>

int esdiavalido(int,int,int);
int esbisiesto(int);

int main()
    {
    int dia, mes, anio, band=1;
    do
        {
        printf("ingrese dia: ");
        scanf("%d",&dia);
        printf("\ningrese mes: ");
        scanf("%d",&mes);
        printf("\ningrese anio: ");
        scanf("%d",&anio);
        }while(esdiavalido(dia,mes,anio)==0);
    printf("%d/%d/%d",dia,mes,anio);
    return 0;
    }

int esdiavalido(int dia,int mes,int anio)
    {
    int band=1;
    if(mes<1 && mes>12)band=0;
    if(anio<1582)band=0;
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        {
        if(dia>31)band=0;
        }
    if(mes==4 || mes==6 || mes==9 || mes==11)
        {
        if(dia>30)band=0;
        }
    if(mes==2)
        {
        if(dia==29 && esbisiesto(anio)!=1)band=0;
        if(dia>29)band=0;
        }
    if(dia<1)band=0;
    return band;
    }

int esbisiesto(int anio)
    {
    int band=1;
    if(anio%4==0)
        {
        if(anio%100==0)
            {
            if(anio%400!=0)band=0;
            }
        }
        else band=0;
    return band;
    }
