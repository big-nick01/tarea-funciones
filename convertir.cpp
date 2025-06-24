
#include <iostream>
using namespace std;

float celsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    cout << "Celsius a Fahrenheit: " << celsiusAFahrenheit(25) << " °F" << endl;
    return 0;
}
