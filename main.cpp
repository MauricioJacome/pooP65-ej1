#include <iostream>
using namespace std;

// Funciones
string analizar(double promedio) {
    if (promedio >= 7) {
        return "Aprobado";
    } else if (promedio >= 5 && promedio < 7) {
        return "Suspendido";
    } else if (promedio >= 1 && promedio < 5) {
        return "Reprobado";
    } else {
        return "Nota invalida";
    }
}

// Main
int main() {
    double deber, trabajo, prueba, examen, promedio;
    cout << "Ingrese la nota de deberes: ";
    cin >> deber;
    cout << "Ingrese la nota de trabajos: ";
    cin >> trabajo;
    cout << "Ingrese la nota de prueba: ";
    cin >> prueba;
    cout << "Ingrese la nota de examen: ";
    cin >> examen;
    promedio = (deber + trabajo + prueba + examen) / 4;
    cout << "El promedio es: " << promedio << endl;
    cout << "Estado del estudiante: " << analizar(promedio) << endl;
    return 0;
}
