#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(string nombre, double salarioBase);

    double calcularSalario() override;
};

#endif