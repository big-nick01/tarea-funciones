
#include <iostream>
using namespace std;

float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

int main() {
    cout << "Área triángulo: " << areaTriangulo(4, 6) << endl;
    return 0;
}
