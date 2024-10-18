#include <iostream>
#include <cmath>

const double k = 8.9875517873681764e9; // Constante de Coulomb en N·m²/C²

double calcularCampoElectrico(double Q, double r) {
    return k * Q / (r * r);
}

int main() {
    double Q, r;
    std::cout << "Introduce la carga (en coulombs): ";
    std::cin >> Q;
    std::cout << "Introduce la distancia (en metros): ";
    std::cin >> r;

    double E = calcularCampoElectrico(Q, r);
    std::cout << "El campo eléctrico es: " << E << " N/C" << std::endl;

    return 0;
}