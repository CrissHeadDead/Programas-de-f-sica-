#include <iostream>

using namespace std;

int main() {
    int opcion;
    double V, I, R;

    cout << "Selecciona una opción:" << endl;
    cout << "1: Calcular corriente (I)" << endl;
    cout << "2: Calcular resistencia (R)" << endl;
    cout << "3: Calcular voltaje (V)" << endl;

    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingresa el valor del voltaje (V): ";
        cin >> V;
        cout << "Ingresa el valor de la resistencia (R): ";
        cin >> R;

        if (R != 0) {
            I = V / R;
            cout << "La corriente es: " << I << " A" << endl;
        } else {
            cout << "Error: La resistencia no puede ser cero." << endl;
        }

    } else if (opcion == 2) {
        cout << "Ingresa el valor del voltaje (V): ";
        cin >> V;
        cout << "Ingresa el valor de la corriente (I): ";
        cin >> I;

        if (I != 0) {
            R = V / I;
            cout << "La resistencia es: " << R << " Ω" << endl;
        } else {
            cout << "Error: La corriente no puede ser cero." << endl;
        }

    } else if (opcion == 3) {
        cout << "Ingresa el valor de la corriente (I): ";
        cin >> I;
        cout << "Ingresa el valor de la resistencia (R): ";
        cin >> R;

        V = I * R;
        cout << "El voltaje es: " << V << " V" << endl;

    } else {
        cout << "Opción inválida." << endl;
    }

    return 0;
}