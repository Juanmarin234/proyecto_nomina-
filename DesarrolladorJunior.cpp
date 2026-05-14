//
// Created by ASUS on 13/05/2026.
//

#include "DesarrolladorJunior.h"


DesarrolladorJunior::DesarrolladorJunior(string nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {
}

double DesarrolladorJunior::calcularSalario() {
    return salarioBase;
}