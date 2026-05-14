//
// Created by ASUS on 13/05/2026.
//

#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(string nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {
}

double DesarrolladorSenior::calcularSalario() {
    return salarioBase + (salarioBase * 0.20);
}