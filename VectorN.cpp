// Autor: Ronald Elian Hurtado Jama
// Fecha: 07/07/2024
// Tema: Ordenación secuencial de un vector de nombres

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función que ordena un vector de nombres de forma secuencial
void OrdenSecuencialNombres(vector<string>& nombres) {
    int total = nombres.size();
    for(int k = 0; k < total; k++) {
        for(int j = k + 1; j < total; j++) {
            if(nombres[k] > nombres[j]) {
                // Intercambiar los valores
                string aux = nombres[k];
                nombres[k] = nombres[j];
                nombres[j] = aux;
            }
        }
    }
}

// Función que imprime los elementos de un vector de nombres
void ImprimirVectorNombres(const vector<string>& nombres) {
    for(int k = 0; k < nombres.size(); k++) {
        cout << nombres[k] << endl;
    }
}

int main() {
    vector<string> nombres = {"Lisbeth", "Ana", "Aslhey", "Eliana", "Ronald"};
    
    cout << "Vector original:" << endl;
    ImprimirVectorNombres(nombres);

    OrdenSecuencialNombres(nombres);

    cout << "\nVector ordenado:" << endl;
    ImprimirVectorNombres(nombres);

    return 0;
}
