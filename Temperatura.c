#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Ingrese la temperatura en Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "La temperatura en Celsius es: " << celsius << endl;

    return 0;
}
