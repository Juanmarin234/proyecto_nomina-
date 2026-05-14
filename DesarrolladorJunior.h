#ifndef DESARROLLADORJUNIOR_H
#define DESARROLLADORJUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(string nombre, double salarioBase);

    double calcularSalario() override;
};

#endif