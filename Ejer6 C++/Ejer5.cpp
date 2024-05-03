#include <iostream>

int main()
{
    const int numEstudiantes = 8;
    double notas[numEstudiantes];
    int aprobados = 0, reprobados = 0;
    double suma = 0.0;

    // Solicitar las notas de cada estudiante
    std::cout << "Ingrese las notas de los " << numEstudiantes << " estudiantes:\n";
    for (int i = 0; i < numEstudiantes; i++)
    {
        std::cout << "Nota del estudiante " << i + 1 << ": ";
        std::cin >> notas[i];

        // Validar que la nota esté en el rango válido (0-100)
        while (notas[i] < 0 || notas[i] > 100)
        {
            std::cout << "La nota debe estar entre 0 y 100. Ingrese nuevamente: ";
            std::cin >> notas[i];
        }

        // Sumar las notas para calcular el promedio
        suma += notas[i];

        // Verificar si el estudiante aprobó o reprobó
        if (notas[i] >= 70)
            aprobados++;
        else
            reprobados++;
    }

    // Calcular el promedio general
    double promedio = suma / numEstudiantes;

    // Mostrar la cantidad de alumnos aprobados y reprobados
    std::cout << "Cantidad de alumnos aprobados: " << aprobados << std::endl;
    std::cout << "Cantidad de alumnos reprobados: " << reprobados << std::endl;

    // Mostrar el promedio general
    std::cout << "Promedio general del grupo: " << promedio << std::endl;

    return 0;
}
