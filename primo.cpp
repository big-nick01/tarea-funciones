
#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "¿Es primo?: " << (esPrimo(11) ? "Sí" : "No") << endl;
    return 0;
}
