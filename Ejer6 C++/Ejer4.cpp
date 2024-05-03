#include <iostream>

int main()
{
    const int numEstudiantes = 10;
    double notas[numEstudiantes];
    double suma = 0.0;

    std::cout << "Ingrese las notas de los " << numEstudiantes << " estudiantes:\n";
    for (int i = 0; i < numEstudiantes; i++)
    {
        std::cout << "Nota del estudiante " << i + 1 << ": ";
        std::cin >> notas[i];

        while (notas[i] < 0 || notas[i] > 100)
        {
            std::cout << "La nota debe estar entre 0 y 100. Ingrese nuevamente: ";
            std::cin >> notas[i];
        }

        suma += notas[i];
    }

    double promedio = suma / numEstudiantes;

    std::cout << "El promedio general de la sección es: " << promedio << std::endl;

    return 0;
}
