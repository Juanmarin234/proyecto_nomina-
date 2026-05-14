#ifndef DESARROLLADORSENIOR_H
#define DESARROLLADORSENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado {
public:
    DesarrolladorSenior(string nombre, double salarioBase);

    double calcularSalario() override;
};

#endif