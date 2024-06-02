//codigo calculo de raices cuadradas

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
double n,Xn,Xnplus;
int i;
cout<<setprecision(12);
cout<<"ingrese un numero"<<endl;
cin>>n;
while(n<0)
    {
    cout<<"los numeros negativos no tienen raiz cuadrada definida en los reales, ingrese otro numero"<<endl;
    cin>>n;
    }
Xn=n/2;
if(n!=0)
    {
    for(i=0;i<50;i++)
        {
        Xnplus=Xn-(Xn*Xn-n)/(2*Xn);
        Xn=Xnplus;
        }
    }else Xnplus=0;
cout<<"la raiz cuadrada de "<<n<<" es "<<Xnplus<<endl;
system("pause");
return 0;
}
