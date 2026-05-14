//
// Created by ASUS on 13/05/2026.
//

#include "LiderTecnico.h"}


LiderTecnico::LiderTecnico(string nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {
}

double LiderTecnico::calcularSalario() {
    return salarioBase + (salarioBase * 0.25);
}