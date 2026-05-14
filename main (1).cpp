#include <iostream>
#include <vector>

#include "Empleado.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

using namespace std;

void inicializarDatos(vector<Empleado*> &empleados) {

    empleados.push_back(new DesarrolladorJunior("Carlos", 2000));
    empleados.push_back(new DesarrolladorJunior("Ana", 2200));

    empleados.push_back(new DesarrolladorSenior("Laura", 4000));
    empleados.push_back(new DesarrolladorSenior("Mateo", 4500));

    empleados.push_back(new LiderTecnico("Sofia", 5000));
    empleados.push_back(new LiderTecnico("Andres", 5500));

    empleados.push_back(new Tester("Camila", 2500));
    empleados.push_back(new Tester("Juan", 2600));
}

void procesarNomina(vector<Empleado*> empleados) {

    double totalNomina = 0;

    cout << "----- NOMINA DE EMPLEADOS -----" << endl;

    for (Empleado* empleado : empleados) {

        double salario = empleado->calcularSalario();

        cout << "Empleado: " << empleado->getNombre()
             << " | Salario: " << salario << endl;

        totalNomina += salario;
    }

    cout << endl;
    cout << "TOTAL NOMINA: " << totalNomina << endl;
}

int main() {

    vector<Empleado*> empleados;

    inicializarDatos(empleados);

    procesarNomina(empleados);

    return 0;
}