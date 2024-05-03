#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int tamanoVectores;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> tamanoVectores;

    vector<int> vectorA(tamanoVectores);
    vector<int> vectorB(tamanoVectores);
    vector<int> vectorSuma(tamanoVectores);

    cout << "\nIngrese los valores del vector A:\n";
    for (int i = 0; i < tamanoVectores; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vectorA[i];
    }

    cout << "\nIngrese los valores del vector B:\n";
    for (int i = 0; i < tamanoVectores; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vectorB[i];
    }

    for (int i = 0; i < tamanoVectores; i++)
    {
        vectorSuma[i] = vectorA[i] + vectorB[i];
    }

    cout << "\nVector Suma:\n";
    for (int i = 0; i < tamanoVectores; i++)
    {
        cout << vectorSuma[i] << " ";
    }

    return 0;
}
