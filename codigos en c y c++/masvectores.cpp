#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int TAMANO_ARRAY = 5;
    vector<int> array_de_vectores[TAMANO_ARRAY];

    // Agregar elementos a los vectores
    for (int i = 0; i < TAMANO_ARRAY; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            array_de_vectores[i].push_back(j);
        }
    }

    // Imprimir los elementos de los vectores
    for (int i = 0; i < TAMANO_ARRAY; ++i) {
        cout << "Vector " << i << ": ";
        for (int elem : array_de_vectores[i]) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
