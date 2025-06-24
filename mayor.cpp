
#include <iostream>
using namespace std;

int mayor(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Mayor: " << mayor(8, 12) << endl;
    return 0;
}
