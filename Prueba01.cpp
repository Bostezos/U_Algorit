#include <iostream>
using namespace std;

int main()
{
    int cantidad;
    double nota, suma = 0;
    int aprobados = 0;

    cout << "=== Calculadora de Promedio UPC ===" << endl;
    cout << "¿Cuantas notas deseas ingresar?: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++)
    {
        cout << "Ingresa la nota " << i << ": ";
        cin >> nota;

                if (nota >= 12.0)
        {
            suma += nota;
            aprobados++;
        }
    }

    if (aprobados > 0)
    {
        cout << "\nPromedio de notas aprobadas: " << (suma / aprobados) << endl;
    }
    else
    {
        cout << "\nNo ingresaste ninguna nota aprobatoria (>= 12)." << endl;
    }

    return 0;
}
