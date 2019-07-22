#include <iostream>
#include <stdio.h>
#include "controledegastos.h"
#include "controlePagamento.h"
#include "data.h"
#include "despesa.h"
#include "Empregado.h"
#include "invoice.h"
#include "pagamentos.h"
#include "pessoa.h"

#define TESTE 63 //2 meses

using namespace std;

int main(){
        //Data
    /*
    Data *d1 = new Data();
    Data *d2 = new Data();
    Data *d3 = new Data(15,2,-1);

    d1->setDia(1);
    d1->setMes(11);
    d1->setAno(2019);

    for(int i = 1; i < TESTE; i++){
        cout << "A data 1 eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;
        d1->avancarDia();
       //getchar();
    }
    cout << endl;
    cout << "A data 2 eh: " << d2->getDia() << "/" << d2->getMes() << "/" << d2->getAno() << endl << endl;
    cout << "A data 3 eh: " << d3->getDia() << "/" << d3->getMes() << "/" << d3->getAno() << endl;

    delete(d1);
    delete(d2);
    delete(d3);
    */

        //Invoice
    /*
    invoice *f1 = new invoice(79,2,3.50,"Batatas douradas");

    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;
    cout << "Preco final: " << f1->getInvoiceAmount() << endl << endl;

    f1->setNumItem(54);
    f1->setQItem(-1);
    f1->setPrecoItem(-100);
    f1->setDescricao("d/dx qualquer coisa");

    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;

    delete(f1);
    */

        //Empregado
    /*
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
    */

        //Pessoa
    /*
    Pessoa *p1 = new Pessoa("Franklin Anthony","(83) 98807-2528",20);
    Pessoa *p2 = new Pessoa("Franklin nao Anthony");

    cout << "Nome2: "<< p2->getNome() << endl << endl;

    p2->setIdade(19);
    p2->setNome("Victor Gorgonho");
    p2->setTelefone("(83) 98619-5322");

    cout << "Nome1: "<< p1->getNome() << "\nTelefone1: " << p1->getTelefone() << "\nIdade1: " << p1->getIdade()<< endl << endl;
    cout << "Nome2: "<< p2->getNome() << "\nTelefone2: " << p2->getTelefone() << "\nIdade2: " << p2->getIdade()<< endl;

    delete(p1);
    delete(p2);
    */

        //Despesa
    /*
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
    */

        //Pagamento
    /*
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
    */
}
