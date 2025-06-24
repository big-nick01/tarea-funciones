
#include <iostream>
using namespace std;

bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    cout << "Es par: " << (esPar(9) ? "Sí" : "No") << endl;
    return 0;
}
