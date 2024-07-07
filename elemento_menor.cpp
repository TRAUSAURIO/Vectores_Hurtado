// Autor: Ronald Elian Hurtado Jama
// Fecha: 07/07/2024
// Tema: Encontrar el elemento menor de un vector

#include <iostream>
#include <vector>

using namespace std;

// Función que encuentra el elemento menor de un vector de enteros
int EncontrarMenor(const vector<int>& vec) {
    int menor = vec[0];
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i] < menor) {
            menor = vec[i];
        }
    }
    return menor;
}

int main() {
    vector<int> numeros = {10, 3, 6, 78, 19, 100, 14};

    cout << "El menor elemento del vector es: " << EncontrarMenor(numeros) << endl;

    return 0;
}
