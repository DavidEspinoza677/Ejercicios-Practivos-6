#include <iostream>

int main()
{
    int suma = 0;

    for (int i = 1; i <= 100; i++)
    {

        suma += i * i;
    }

    std::cout << "La suma de los cuadrados de los números entre 1 y 100 es: " << suma << std::endl;

    return 0;
}
