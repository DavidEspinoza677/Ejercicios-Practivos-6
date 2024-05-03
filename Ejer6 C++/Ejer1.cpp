#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma = 0;

    cout << "Ingrese un número natural: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "El número ingresado no es natural." << endl;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            suma += i;
        }

        cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << endl;
    }

    return 0;
}
