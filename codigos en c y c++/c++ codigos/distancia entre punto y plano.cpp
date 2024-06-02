#include <stdio.h>
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
int m=1;
while(m==1)
{
    float qp[1][3], n[1][3], D, p[1][3],suma,distancia,suma2,suma3;
    int i;
    cout<<"ingresar coeficiente de x"<<endl;
    cin>>n[0][0];
    cout<<"ingresar coeficiente de y"<<endl;
    cin>>n[0][1];
    cout<<"ingresar coeficiente de z"<<endl;
    cin>>n[0][2];
    cout<<"ingresar constante"<<endl;
    cin>>D;
    while(n[0][0]==0 && n[0][1]==0 && n[0][2]==0 && D==0)
        {
        cout<<"ingresar coeficiente de x"<<endl;
        cin>>n[0][0];
        cout<<"ingresar coeficiente de y"<<endl;
        cin>>n[0][1];
        cout<<"ingresar coeficiente de z"<<endl;
        cin>>n[0][2];
        cout<<"ingresar constante"<<endl;
        cin>>D;
        }
    cout<<"ingrese coordenada x del punto"<<endl;
    cin>>p[0][0];
    cout<<"ingrese coordenada y del punto"<<endl;
    cin>>p[0][1];
    cout<<"ingrese coordenada z del punto"<<endl;
    cin>>p[0][2];
    for(i=0;i<4;i++)
        {
            if(i<3)suma+=n[0][i]*p[0][i];
                else suma+=D;
        }
    if(suma<0)suma*=(-1);
    for(i=0;i<3;i++)
        {
        suma2+=n[0][i]*n[0][i];
        }
    suma3=sqrt(suma2);
    distancia=suma/suma3;
    if(D>0)printf("la distancia entre el plano %gx+%gy+%gz+%g y el punto (%g;%g;%g) es igual a %g\n",n[0][0],n[0][1],n[0][2], D,p[0][0],p[0][1],p[0][2],distancia);
        else printf("la distancia entre el plano %gx+%gy+%gz%g y el punto (%g;%g;%g) es igual a %g\n",n[0][0],n[0][1],n[0][2], D,p[0][0],p[0][1],p[0][2],distancia);
    system("pause");
    printf("ingrese un 1 si quiere continuar\n");
    scanf("%g",&m);
}
    return 0;
}
