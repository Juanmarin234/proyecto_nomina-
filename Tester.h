#ifndef TESTER_H
#define TESTER_H

#include "Empleado.h"

class Tester : public Empleado {
public:
    Tester(string nombre, double salarioBase);

    double calcularSalario() override;
};

#endif