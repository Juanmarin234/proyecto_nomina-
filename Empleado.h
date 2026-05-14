#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
using namespace std;

class Empleado {
protected:
    string nombre;
    double salarioBase;

public:
    Empleado(string nombre, double salarioBase);

    virtual double calcularSalario();

    string getNombre();
};

#endif