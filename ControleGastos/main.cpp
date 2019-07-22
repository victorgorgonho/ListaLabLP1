#include <iostream>
#include <stdio.h>
#include "controledegastos.h"
#include "despesa.h"

using namespace std;

int main(){
    despesa *d1 = new despesa();
    despesa *d2 = new despesa();

    d1->setValor(15);
    d1->setTipoDeGasto("Uber");
    cout << "Valor despesa 1: " << d1->getValor() << "\nTipo despesa 1: " << d1->getTipoDeGasto() << endl;

    d2->setValor(30);
    d2->setTipoDeGasto("iFood");
    cout << "Valor despesa 2: " << d2->getValor() << "\nTipo despesa 2: " << d2->getTipoDeGasto() << endl << endl;

    controledegastos *cd = new controledegastos();
    cd->setDespesas(*d1, 2);
    cd->setDespesas(*d2, 8);

    cout << "Total de despesas: " << cd->calculaTotalDespesas() << endl;

    if(cd->existeDespesaDoTipo("Uber"))
        cout << "Existe" << endl;
    else
        cout << "Nao existe" << endl;

    delete(d1);
    delete(d2);
}
