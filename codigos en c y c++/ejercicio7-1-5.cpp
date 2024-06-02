#include <stdio.h>

#define num_productos 10

int ingreseunidad();
void mostrar(int[],int);
int leer();

int main()
    {
    int cod=1,ventas[num_productos]={0};
    while(cod!=0)//bucle, verifica si el codigo es 0
        {
        cod=leer();//funcion que lee el codigo y lo guarda en cod
        if(cod!=0)ventas[cod-1]+=ingreseunidad();//si el cod es diferente de 0 nos permite ingresar el numero de ventas en la posicion del cod
        }
    mostrar(ventas,num_productos);//muestra las ventas y su codigo
    return 0;
    }

int leer()//funcion que lee el cod
    {
    printf("ingrese el codigo de producto a vender\n");
    int cod;
    do{scanf("%d",&cod);}while(cod<0 || cod>num_productos);
    return cod;
    }

void mostrar(int ventas[],int n)//funcion que muestra las ventas y su codigo
    {
    int i;
    for(i=0;i<n;i++)
        {
        if(ventas[i]>0)
            printf("la cantidad de ventas del producto con codigo %d son %d \n",i+1,ventas[i]);
        }
    }

int ingreseunidad()//funcion que nos permite ingresar la cantidad de ventas que se guardaran en la poscicion del codigo
    {
    int u;
    printf("ingrese unidades a vender\n");
    do{scanf("%d",&u);}while(u<=0);
    return u;
    }
