//productorio y exponenciatorio
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using std::cout;
using std::cin;
using std::setprecision;

int main()
    {
    cout<<setprecision(10);
    cout<<"calculadora de tetracion incremental num1/(num2+i) con indice n"<<std::endl;
    double ind,num1,num2,res=1,i;
    while(1){
    cout<<"ingresa el primer numero: ";
    cin>>num1;
    cout<<"ingresa el segundo numero: ";
    do{cin>>num2;}while(num2==0);
    cout<<"ingresa el indice n de tetracion(mayor a 0): ";
    do
        {
        cin>>ind;
        if(ind<0)cout<<"indice negativo, ingresa uno valido: ";
        }while(ind<0);
    for(i=0;i<=ind;i++)
        {
        if(i==0 && ind!=0)res=pow(num1/(num2+ind-1),num1/(num2+ind));
            else if(i!=1) res=pow(num1/(num2+ind-i),res);
        cout<<"par ordenado ("<<i<<","<<res<<")"<<std::endl;
        }
    if(ind==0)res=num1/num2;
    cout<<num1<<"/("<<num2<<"+i) tetracion a "<<ind<<" con i incremental es igual a "<<res<<std::endl;
    }
    return 0;
    }

