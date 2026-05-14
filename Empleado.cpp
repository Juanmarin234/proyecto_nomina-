#include "Empleado.h"

Empleado::Empleado(string nombre, double salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

double Empleado::calcularSalario() {
    return salarioBase;
}

string Empleado::getNombre() {
    return nombre;
}