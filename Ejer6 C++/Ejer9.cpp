#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplicarMatrices(const vector<vector<int>> &matriz1, const vector<vector<int>> &matriz2)
{
    if (matriz1[0].size() != matriz2.size())
    {
        cout << "Las matrices no son compatibles para la multiplicacion." << endl;
        return {};
    }

    int filas_resultado = matriz1.size();
    int columnas_resultado = matriz2[0].size();
    int interseccion = matriz1[0].size();
    vector<vector<int>> resultado(filas_resultado, vector<int>(columnas_resultado, 0));

    for (int i = 0; i < filas_resultado; ++i)
    {
        for (int j = 0; j < columnas_resultado; ++j)
        {
            for (int k = 0; k < interseccion; ++k)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

void mostrarMatriz(const vector<vector<int>> &matriz)
{
    for (size_t i = 0; i < matriz.size(); ++i)
    {
        for (size_t j = 0; j < matriz[i].size(); ++j)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int filas1, columnas1;
    cout << "Ingrese el numero de filas y columnas de la primera matriz: ";
    cin >> filas1 >> columnas1;

    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; ++i)
    {
        for (int j = 0; j < columnas1; ++j)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    int filas2, columnas2;
    cout << "Ingrese el numero de filas y columnas de la segunda matriz: ";
    cin >> filas2 >> columnas2;

    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; ++i)
    {
        for (int j = 0; j < columnas2; ++j)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    vector<vector<int>> resultado = multiplicarMatrices(matriz1, matriz2);

    cout << "El resultado de la multiplicacion de matrices es:" << endl;
    mostrarMatriz(resultado);

    return 0;
}
