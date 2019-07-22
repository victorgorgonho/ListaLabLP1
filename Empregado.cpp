#include "Empregado.h"

Empregado::Empregado(std::string nome, std::string sobrenome, double salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

std::string Empregado::getNome(){
    return nome;
}

std::string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}

void Empregado::setNome(std::string nome){
    this->nome = nome;
}

void Empregado::setSobrenome(std::string sobrenome){
    this->sobrenome = nome;
}

void Empregado::setSalario(double salario){
    if(salario <= 0)
        this->salario = 1;
    else
        this->salario = salario;
}
