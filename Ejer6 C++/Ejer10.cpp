#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transponerMatriz(const vector<vector<int>> &matriz)
{
    int filas = matriz.size();
    int columnas = matriz[0].size();

    vector<vector<int>> transpuesta(columnas, vector<int>(filas));

    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    return transpuesta;
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
    int filas, columnas;
    cout << "Ingrese el numero de filas y columnas de la matriz: ";
    cin >> filas >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    vector<vector<int>> transpuesta = transponerMatriz(matriz);

    cout << "La matriz transpuesta es:" << endl;
    mostrarMatriz(transpuesta);

    return 0;
}
