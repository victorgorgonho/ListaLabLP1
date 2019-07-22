#include <iostream>
#include <stdio.h>
#include "controlePagamento.h"
#include "pagamentos.h"

using namespace std;

int main(){
    controlePagamento *controlPag = new controlePagamento();

    controlPag->setPagamentos("Victor Gorgonho", 910);
    controlPag->setPagamentos("Victor Gorgonho", 1000);
    controlPag->setPagamentos("Victor Gorgonho", 1500);

    cout << "Total pago: " << controlPag->calculaTotalDePagamentos() << endl;

    if(controlPag->existePagamentoParaFuncionario("Victor Gorgonho"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;

    if(controlPag->existePagamentoParaFuncionario("Carlos Gabriel"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;

    delete(controlPag);
}
