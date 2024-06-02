//modelo de examen
#include <stdio.h>

int leeryvalidar(int,int);
void mostrarmatriz(float[][12],int,int);
void armarsuma(float[][12],float[],int,int,int);
void mostrarvector(float[],int);
int buscarmayor(float[],int);
int buscarmenor(float[],int);
void copiarvector(float[][12],float[],int,int,int);
void ordenarvector(float[],int[],int);
void mostrarepetido(float[],float,int);

int main()
    {
    float mat[20][12]={{0}},km,kmt[20]={0},kmmes[20],km7[12];
    int i,j,k,l,autos=1,mes,minmes,meses[12],maxmes,maxauto;
    for(i=0;i<12;i++)
        {
        meses[i]=i+1;
        }
    while(autos!=21)
        {
        printf("ingrese el numero del auto (ingrese un 21 para terminar): ");
        autos=leeryvalidar(1,21);
        if(autos!=21)
            {
            printf("ingrese el mes: ");
            mes=leeryvalidar(1,12);
            do
                {
                printf("ingrese la cantidad de kilometros: ");
                scanf("%f",&km);
                }while(km<0);
            mat[autos-1][mes-1]+=km;
            }
        }
    armarsuma(mat,kmt,20,12,1);
    armarsuma(mat,kmmes,20,12,0);
    minmes=buscarmenor(kmmes,12);
    printf("\nminimo mes %d\n",minmes);
    copiarvector(mat,km7,12,6,1);
    ordenarvector(km7,meses,12);
    maxmes=buscarmayor(kmmes,12);
    printf("mayor km por mes: %f\n",kmmes[maxmes-1]);
    printf("meses con %fkm recorridos: ",kmmes[maxmes-1]);
    mostrarepetido(kmmes,kmmes[maxmes-1],12);
    maxauto=buscarmayor(kmt,20);
    printf("mayor km por auto: %f\n",kmt[maxauto-1]);
    printf("autos con %fkm recorridos: ",kmt[maxauto-1]);
    mostrarepetido(kmt,kmt[maxauto-1],20);
    mostrarmatriz(mat,20,12);
    for(i=0;i<20;i++)
        {
        printf("el vehiculo numero %d recorrio %7.2fkm en el anio\n",i+1,kmt[i]);
        }
    printf("\ttotal recorrido por meses");
    for(i=0;i<12;i++)
        {
        printf(" %6.2f ",kmmes[i]);
        }
    printf("\nel mes con menor cantidad de km es %d con %6.2fkm",minmes,kmmes[minmes-1]);
    printf("\n\tvehiculo numero 7\n");
    printf("\tmes\t\tcantidad de km\n");
    for(i=0;i<12;i++)
        {
        printf("\t%6d\t\t%6.2f\n",meses[i],km7[i]);
        }
    }


void mostrarepetido(float vec[], float elem, int n)
    {
    int i;
    for(i=0;i<n;i++)
        {
        if(elem==vec[i])
            {
            printf("\n\t%d\t%f\n ",i+1,vec[i]);
            }
        }
    }
void ordenarvector(float vec[],int vec2[],int n)
    {
    int i, j, aux, aux2;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n-1-i;j++)
            {
            if(vec[j]>vec[j+1])
                {
                aux=vec[j+1];
                vec[j+1]=vec[j];
                vec[j]=aux;
                aux2=vec2[j+1];
                vec2[j+1]=vec2[j];
                vec2[j]=aux2;
                }
            }
        }
    }

void copiarvector(float mat[][12],float vec[],int matr,int n, int par)
    {
    int i;
    if(par==1)
        {
        for(i=0;i<matr;i++)
            {
            vec[i]=mat[n][i];
            }
        }
    if(par==0)
        {
        for(i=0;i<matr;i++)
            {
            vec[i]=mat[i][n];
            }
        }
    }
void mostrarvector(float kmt[],int cant)
    {
    int i;
    printf("\n");
    for(i=0;i<cant;i++)
        {
        printf("vehiculo numero %d recorrio: ",i+1);
        printf("%.2fkm entre todos los meses\n",kmt[i]);
        }
    }

int buscarmenor(float vec[],int n)
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


int buscarmayor(float vec[],int n)
    {
    int i,j,pos=1,max;
    max=vec[0];
    for(i=0;i<n;i++)
        {
        for(j=0;j<n-1;j++)
            {
            if(max<vec[j+1])
                {
                max=vec[j+1];
                pos=j+2;
                }
            }
        }
    return pos;
    }

void mostrarmatriz(float mat[][12],int fila,int colum)
    {
    int i,j;
    for(i=0;i<fila;i++)
        {
        for(j=0;j<colum;j++)
            {
            printf("%7.2f ",mat[i][j]);
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

void armarsuma(float mat[][12],float kmt[],int fila,int colum,int par)
    {
    int i,j;
    if(par==1)
    {
    for(i=0;i<fila;i++)
        {
        for(j=0;j<colum;j++)
            {
            kmt[i]+=mat[i][j];
            }
        }
    }
    if(par==0)
    {
    for(i=0;i<colum;i++)
        {
        for(j=0;j<fila;j++)
            {
            kmt[i]+=mat[j][i];
            }
        }
    }
    }
