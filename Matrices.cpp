
#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int suma = 0;

    // Ingresar datos
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar matriz
    cout << "\nMatriz ingresada:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << "\t";
            suma += matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nLa suma total es: " << suma << endl;

    return 0;
}
