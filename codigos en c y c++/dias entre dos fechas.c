/*distancia entre dos fechas*/
#include <stdio.h>
#include <windows.h>
//prototipos de funcion
int diasdelmes(int,int);
int leeryvalidar(int,int);
int leeranio(int);
int esbisiesto(int);
int esfechavalida(int,int,int,int,int,int);

int main()
    {
    int dia1,dia2,mes1,mes2,anio1,anio2, band,years=0,days=0,j,i;
    do
        {
        do
            {
            printf("ingresa dia incial: ");
            scanf("%d",&dia1);
            printf("ingresa mes incial: ");
            mes1=leeryvalidar(1,12);
            printf("ingresa anio incial: ");
            anio1=leeranio(1582);
            }while(dia1<0 || dia1>diasdelmes(mes1,anio1));//ingreso de primer fecha
        do
            {
            printf("ingresa dia final: ");
            scanf("%d",&dia2);
            printf("ingresa mes final: ");
            mes2=leeryvalidar(1,12);
            printf("ingresa anio final: ");
            anio2=leeranio(1582);
            }while(dia2<0 || dia2>diasdelmes(mes2,anio2));//ingreso de segunda fecha
        band=esfechavalida(anio1,mes1,dia1,anio2,mes2,dia2);//valida que la fecha 2 es posterior a la 1
        if(band==2)return 0;//si la band(flag) vale dos significa que la distacia era 0, mismas fechas
        }while(band);//si la fecha es invalida no sale del while
    if(anio1==anio2)//caso mismos años
        {
        if(mes1==mes2)days=dia2-dia1;//si es el mismo año y el mismo mes la diferencia entre fechas es la diferencia de dias
            else
                {
                days=diasdelmes(mes1,anio1)-dia1+dia2;
                for(i=mes1+1;i<mes2;i++)
                    {
                    days+=diasdelmes(i,anio1);
                    }
                }//si eran meses diferentes entonces sumamos los dias hasta el final del primer mes y los dias que pasaron del segundo mes contando los dias de los meses en medio
        }
    if(anio1!=anio2)//caso años diferentes
        {
        days=diasdelmes(mes1,anio1)-dia1+dia2;//sumamos al contador los que faltan para que termine el primer mes de la fecha 1 y los dias del mes de la fecha 2
        years=anio2-anio1-1;//diferencia de años (-1 para no tener en cuenta los años ingresados)
        for(i=mes1+1;i<=12;i++)
            {
            days+=diasdelmes(i,anio1);
            }//cuenta los dias hasta el fin de año de la primer fecha, descartando los dias del primer mes porque ya los sumamos
        for(i=mes2-1;i>=1;i--)
            {
            days+=diasdelmes(i,anio2);
            }//cuanta los dias que pasaron de la segunda fecha, descartando el mes ingresad porque ya los sumamos
        }
    printf("pasaron %d anios y %d dias o %d dias.\n",years+days/365,days%365,365*years+days);
    printf("Entre el dia %d del mes %d del anio %d ",dia1,mes1,anio1);
    printf("y el dia %d del mes %d del anio %d\n",dia2,mes2,anio2);
    system("pause");
    return 0;
    }

int esfechavalida(int anio1,int mes1,int dia1,int anio2,int mes2, int dia2)//valida si la fecha 2 es posterior a la fecha 1 o son iguales
    {
    /*
    if(anio2<anio1)
        {
        printf("la fecha ingresada es invalida, porfavor la segunda vez ingrese una fecha posterior a la primera");
        band=1;
        }
    if(anio2==anio1 && mes2<mes1)
        {
        printf("la fecha ingresada es invalida, porfavor la segunda vez ingrese una fecha posterior a la primera");
        band=1;
        }
    if(anio2==anio1 && mes2==mes1 && dia2<dia1)
        {
        printf("la fecha ingresada es invalida, porfavor la segunda vez ingrese una fecha posterior a la primera");
        band=1;
        }*/
    if (anio2 < anio1 || (anio2 == anio1 && mes2 < mes1) || (anio2 == anio1 && mes2 == mes1 && dia2 < dia1))
        {
        printf("La fecha ingresada es inválida, por favor ingrese una fecha posterior a la primera.\n");
        return 1;
        }
    if(anio1==anio2 && mes1==mes2 && dia1==dia2)
        {
        printf("la distancia entre fechas es 0, misma fecha ingresada");
        return 2;
        }
    return 0;
    }

int leeryvalidar(int linf,int lsup)//valida un dato entre limite superior e inferior
    {
    int num;
    do
        {
        scanf("%d",&num);
        }while(num<linf || num>lsup);
    return num;
    }

int leeranio(int linf)//valida un dato con limite inferior, en este caso solo limite inferior por 1582 origen del calendario gregoriano
    {
    int num;
    do
        {
        scanf("%d",&num);
        }while(num<linf);
    return num;
    }

int diasdelmes(int mes,int anio)//me devuelve los dias de un mes usando la funcion es bisiesto en el caso de febrero
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

int esbisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) return 1;
    return 0;
}

/*int esbisiesto(int anio)//me dice si un año ingresado es bisisesto
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
    }*/

