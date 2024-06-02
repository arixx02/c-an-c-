//Cableando rutas. De Brito, Ariel. EESTN°8 Morón.
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long int N=0, K, k, limite, suma=0, diferencia, Max, Min, i;
    limite=pow(10,9);
    while(N<1 || N>200000 || K<0 || K>limite){ cin>>N>>K; }
    Max=K; Min=K;
    for(i=0;i<N;i++){
            cin>>k;
            while(k<0 || k>limite){ cin>>k; }
            if(k<Min){ diferencia=Min-k; Min=k; suma+=diferencia; }
            if(k>Max){ diferencia=k-Max; Max=k; suma+=diferencia; }
    }
    cout<<suma<<endl;
    return 0;
}