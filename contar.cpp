
#include <iostream>
using namespace std;

int contarDigitos(int numero) {
    if (numero == 0) return 1;
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

int main() {
    cout << "Cantidad de dígitos: " << contarDigitos(12345) << endl;
    return 0;
}
