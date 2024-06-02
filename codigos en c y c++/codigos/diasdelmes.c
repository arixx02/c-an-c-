#include <stdio.h>

int diasdelmes(int,int);
int leeryvalidar(int,int);
int leeranio(int);
int esbisiesto(int);

int main()
    {
    int mes, anio;
    while(1){
    mes=leeryvalidar(1,12);
    anio=leeranio(1582);
    printf("%d",diasdelmes(mes,anio));
    }
    return 0;
    }

int leeryvalidar(int linf,int lsup)
    {
    int num;
    do
        {
        scanf("%d",&num);
        }while(num<linf || num>lsup);
    return num;
    }
int leeranio(int linf)
    {
    int num;
    do
        {
        scanf("%d",&num);
        }while(num<linf);
    return num;
    }
int diasdelmes(int mes,int anio)
    {
    int dias;
    if(mes==1 || mes==3 || mes==5 || mes==7 ||  mes==8 || mes==10 || mes==12)dias=31;
        else if(mes==2)
            {
            dias=28+esbisiesto(anio);
            }
            else dias=30;
    return dias;
    }

int esbisiesto(int anio)
    {
    int band=0;
    if(anio%4==0)
        {
        if(anio%100==0)
            {
            if(anio%400==0)band=1;
            }
            else band=1;
        }
    return band;
    }
