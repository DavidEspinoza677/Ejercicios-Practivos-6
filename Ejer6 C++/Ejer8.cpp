#include <iostream>
#include <vector>

using namespace std;

int productoPunto(const vector<int> &vector1, const vector<int> &vector2)
{

    if (vector1.size() != vector2.size())
    {
        cout << "Los vectores no tienen la misma longitud." << endl;
        return 0;
    }

    int resultado = 0;

    for (size_t i = 0; i < vector1.size(); ++i)
    {
        resultado += vector1[i] * vector2[i];
    }

    return resultado;
}

int main()
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    int resultado = productoPunto(vector1, vector2);

    cout << "El producto punto de los dos vectores es: " << resultado << endl;

    return 0;
}
