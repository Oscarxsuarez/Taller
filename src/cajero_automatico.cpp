#include <iostream>
using namespace std;

int main() {
    int monto;
    int opcion;
    string pin = "1234";  
    string entrada;
    int intentos = 0;
    int saldo = 10000;      

    while (true) {
        cout << "Ingrese su PIN de 4 digitos: ";
        cin >> entrada;
        if (entrada == pin) {
            cout << "PIN correcto. Bienvenido." << endl;
            break;
        } else {
            intentos++;
            cout << "PIN incorrecto." << endl;
            if (intentos >= 3) {
                cout << "Cuenta bloqueada por demasiados intentos.";
                return 0;
            }
        }
    }


    cout << "=== MENU ===" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Saldo disponible: $" << saldo << endl;
    } else if (opcion == 2) {
        cout << "Saldo disponible: $" << saldo << endl;
        cout << "Monto a retirar: ";
        cin >> monto;
        if (monto <= saldo && monto > 0) {
            saldo -= monto;
            cout << "Retiro exitoso, nuevo saldo: $" << saldo << endl;
        } else {
            cout << "Fondos insuficientes o monto inválido." << endl;
        }
    } else if (opcion == 3) {
        cout << "Gracias por usar el cajero, hasta luego." << endl;
    } else {
        cout << "Opción inválida." << endl;
    }

    return 0;
}
