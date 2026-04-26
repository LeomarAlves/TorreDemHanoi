#ifndef HANOI_H
#define HANOI_H
#include <stack>
#include <string>

using namespace std;

struct hanoi
{
    stack<int> hasteA;
    stack<int> hasteB;
    stack<int> hasteC;
    int contador;
};


void inicializarHastes(int n, stack<int>& a, stack<int>& b, stack<int>& c);
void resolverHanoi(int n, stack<int>& origem, stack<int>& destino, stack<int>& auxiliar, char nomeOrigem, char nomeDestino, char nomeAuxiliar, hanoi& jogo);
string imprimirPilha(char nome, stack<int> p);
void imprimirEstado(hanoi& jogo);

#endif
