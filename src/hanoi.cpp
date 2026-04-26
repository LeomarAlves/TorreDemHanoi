#include "../include/hanoi.h"
#include <iostream>
#include <stack>

using namespace std;

void inicializarHastes(int n, stack<int>& a, stack<int>& b, stack<int>& c){
    for (int i = n; i >= 1; i--)
    {
        a.push(i);
    }
    
}

void resolverHanoi(int n, stack<int>& origem, stack<int>& destino, stack<int>& auxiliar, char nomeOrigem, char nomeDestino, char nomeAuxiliar, int& contador) {
    
    contador = 0;

    if (n == 1) {
        int disco = origem.top();
        destino.push(disco);
        origem.pop();
        cout << "Mover disco " << n << " de " << nomeOrigem << " para " << nomeDestino << endl;
        contador++;
        return;
    }

    resolverHanoi(n - 1, origem, auxiliar, destino, nomeOrigem, nomeAuxiliar, nomeDestino, contador);

    resolverHanoi(1, origem, destino, auxiliar, nomeOrigem, nomeDestino, nomeAuxiliar, contador);

    resolverHanoi(n - 1, auxiliar, destino, origem, nomeAuxiliar, nomeDestino, nomeOrigem, contador);

}