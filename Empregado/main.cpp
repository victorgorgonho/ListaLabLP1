#include <iostream>
#include <stdio.h>
#include "Empregado.h"

using namespace std;

int main(){
    Empregado *e1 = new Empregado("Franklin", "Anthony", 4500);
    Empregado *e2 = new Empregado();

    e2->setNome("Victor");
    e2->setSobrenome("Gorgonho");
    e2->setSalario(5000);

    cout << "Salario anual de " << e1->getNome() << " " << e1->getSobrenome() << ": " << e1->getSalario() * 12 << endl;
    cout << "Salario anual de " << e2->getNome() << " " << e2->getSobrenome() << ": " << e2->getSalario() * 12 << endl;

    cout << "Salario anual pos aumento de 10% de " << e1->getNome() << " " << e1->getSobrenome() << ": " << e1->getSalario() * 12 * 1.1 << endl;
    cout << "Salario anual pos aumento de 10% de " << e2->getNome() << " " << e2->getSobrenome() << ": " << e2->getSalario() * 12 * 1.1 << endl;

    delete(e1);
    delete(e2);
}
