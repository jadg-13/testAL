// Multiplicacion de matrices

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];
    int i, j;
    // Llenar matriz A
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            cout << "Valor: ";
            cin >> matrizA[i][j];
            j++;
        }
        i++;
    }

    // Llenar matriz B
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            cout << "Valor: ";
            cin >> matrizB[i][j];
            j++;
        }
        i++;
    }

    // Multiplicar matrices
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            matrizC[i][j] = matrizA[i][0] * matrizB[0][j] + matrizA[i][1] * matrizB[1][j] + matrizA[i][2] * matrizB[2][j];
            j++;
        }
        i++;
    }

    // Imprimir matriz C
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            cout << matrizC[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }


    return 0;
}
