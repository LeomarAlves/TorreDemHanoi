#ifndef HANOI_H
#define HANOI_H
#include <stack>
#include <string>

struct hanoi
{
    std:: stack<int> hasteA;
    std:: stack<int> hasteB;
    std:: stack<int> hasteC;
    int contador;
};


void inicializarHastes(int n, std:: stack<int>& a, std:: stack<int>& b, std:: stack<int>& c);
void resolverHanoi(int n, std:: stack<int>& origem, std:: stack<int>& destino, std:: stack<int>& auxiliar, char nomeOrigem, char nomeDestino, char nomeAuxiliar, hanoi& jogo);
std:: string imprimirPilha(char nome, std:: stack<int> p);
void imprimirEstado(hanoi& jogo);

#endif
