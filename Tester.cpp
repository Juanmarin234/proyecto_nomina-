//
// Created by ASUS on 13/05/2026.
//

#include "Tester.h"


Tester::Tester(string nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {
}

double Tester::calcularSalario() {
    return salarioBase + (salarioBase * 0.05);
}