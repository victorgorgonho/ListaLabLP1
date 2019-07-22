#include "despesa.h"

despesa::despesa()
{
    valor = 0;
    tipoDeGasto = " ";
}

double despesa::getValor(){
    return valor;
}

std::string despesa::getTipoDeGasto(){
    return tipoDeGasto;
}

void despesa::setValor(double valor){
    if(valor < 0)
        this->valor = 0;
    else
        this->valor = valor;
}

void despesa::setTipoDeGasto(std::string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}
