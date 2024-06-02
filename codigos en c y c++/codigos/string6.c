/*Utilizando las funciones definidas anteriormente se desea realizar el siguiente programa, cargar 5
nombres de hasta 10 caracteres cada uno en un vector de string. Luego ingresar nombres por
teclado e indicar si se encuentran en el vector, la búsqueda finalizará con un nombre igual a “FIN”.
Luego mostrar el listado de nombres ordenado alfabéticamente de menor a mayor.
No se desarrollan las funciones ya que son las mismas del punto 7.*/

#include <stdio.h>
#include <string.h>
void LeerTexto (char[][11], int);
int main()
{
int i;
char nombre[5][11];
LeerTexto(nombre,5);
for(i=0;i<5;i++)
    puts(nombre[i]);
return 0;
}
void LeerTexto (char mat[][11], int cant)
{
int i,j=0;
for(i=0;i<cant;i++)
    {
    fgets(mat[i],11,stdin);
    while(mat[i][j]!='\0')
        if(mat[i][j]=='\n')
            mat[i][j]='\0';
            else
                j++;
    j=0;
    }
}


