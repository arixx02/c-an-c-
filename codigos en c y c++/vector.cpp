#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;

    std::cout << "Ingresa numeros separados por espacios (ingresa una letra para terminar):" << std::endl;

    int numero;
    while (std::cin >> numero) {
        numeros.push_back(numero);
    }

    // Imprimir los números ingresados
    std::cout << "Numeros ingresados: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
