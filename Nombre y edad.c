#include <iostream>
using namespace std;

int main() {
    char nombre[50], apellido[50];
    int edad;

    cout << "Ingrese su nombre: ";
    cin.getline(nombre, 50);

    cout << "Ingrese su apellido: ";
    cin.getline(apellido, 50);

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Hola, " << nombre << " " << apellido << ". Tienes " << edad << " años." << endl;

    return 0;
}
