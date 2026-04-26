#include <iostream>
#include <stack>
#include <cassert>
#include "../include/hanoi.h"

using namespace std;

int main(){
    stack<int> hasteA, hasteB, hasteC;
    int n = 5;
    int contador =0;

    inicializarHastes(n, hasteA, hasteB, hasteC);

    assert(hasteA.size() == 5);
    assert(hasteB.empty() == true);
    assert(hasteC.empty() == true);
    assert(hasteA.top() == 1);

    cout << "Teste de inicialização passou com sucesso!" << endl;

    resolverHanoi(n, hasteA, hasteC, hasteB, 'A', 'C', 'B', contador);

    assert(hasteA.empty() == true);
    assert(hasteB.empty() == true);
    assert(hasteC.size() ==5);
    assert(hasteC.top() == 1);

    cout << "Teste de resolução da Torre de Hanoi passou com sucesso!" << endl;

    return 0;
}
   
