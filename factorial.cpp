
#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    cout << "Factorial: " << factorial(5) << endl;
    return 0;
}
