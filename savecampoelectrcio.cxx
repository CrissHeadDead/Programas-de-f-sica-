#include <iostream>
using namespace std;

double calcularFuerza(double q, double E) {
    return q * E;
}


double calcularCarga(double F, double E) {
    return F / E;
}


double calcularCampo(double F, double q) {
    return F / q;
}

int main() {
    int opcion;
    double F, q, E;

    
    cout << "Seleccione la fórmula que desea calcular:" << endl;
    cout << "1. Fuerza Eléctrica (F = q * E)" << endl;
    cout << "2. Carga (q = F / E)" << endl;
    cout << "3. Campo Eléctrico (E = F / q)" << endl;
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ingrese la carga (q) en coulombs: ";
            cin >> q;
            cout << "Ingrese el campo eléctrico (E) en N/C: ";
            cin >> E;
            F = calcularFuerza(q, E);
            cout << "La fuerza eléctrica es: " << F << " N" << endl;
            break;
        case 2:
            cout << "Ingrese la fuerza (F) en newtons: ";
            cin >> F;
            cout << "Ingrese el campo eléctrico (E) en N/C: ";
            cin >> E;
            q = calcularCarga(F, E);
            cout << "La carga es: " << q << " C" << endl;
            break;
        case 3:
            cout << "Ingrese la fuerza (F) en newtons: ";
            cin >> F;
            cout << "Ingrese la carga (q) en coulombs: ";
            cin >> q;
            E = calcularCampo(F, q);
            cout << "El campo eléctrico es: " << E << " N/C" << endl;
            break;
        default:
            cout << "Opción no válida. Por favor, seleccione 1, 2 o 3." << endl;
    }

    return 0;
}