// Autor: Ronald Elian Hurtado Jama
// Fecha: 07/07/2024
// Tema: Encontrar el elemento mayor de un vector

#include <iostream>
#include <vector>

using namespace std;

// Función que encuentra el elemento mayor de un vector de enteros
int EncontrarMayor(const vector<int>& vec) {
    int mayor = vec[0];
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i] > mayor) {
            mayor = vec[i];
        }
    }
    return mayor;
}

int main() {
    vector<int> numeros = {10, 3, 6, 78, 19, 100, 14};

    cout << "El mayor elemento del vector es: " << EncontrarMayor(numeros) << endl;

    return 0;
}
