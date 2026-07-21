#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int edad;
    string nombre;

    cout << "Porfavor Ingresa solo 1 nombre: ";
    cin >> nombre;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    int year;
    time_t t = time(0);
    tm* now = localtime(&t);
    year = (now->tm_year + 1900) - edad;

    if (edad < 0 || edad > 99 ) {
        cout << "Edad invalida, por favor ingresa un valor real." << endl;
    } else if (edad < 18) {
        cout << "Hola " << nombre << ", tienes " << edad 
             << " anos.  Te faltan " << (18 - edad) 
             << " anos para ser mayor de edad." << endl;
    } else if (edad == 18) {
        cout << "Hola " << nombre << ", ¡felicidades!  "
             << "Acabas de alcanzar la mayoría de edad." << endl;
    } else {
        cout << "Hola " << nombre << ", tienes " << edad 
             << " anos.  Ya eres mayor de edad." << endl;
    }

    cout << "Por cierto, naciste en el ano " << year << "." << endl;

    // Mensaje divertido / trivia
    cout << "Dato curioso: Sabias que en Japon la mayoria de edad es a los 20 anos" << endl;

    return 0;
}
