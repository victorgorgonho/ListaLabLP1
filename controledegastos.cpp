#include "controledegastos.h"

controledegastos::controledegastos(){
    for(int i = 0; i<MAX_VETOR; i++)
        despesas[i] = despesa();
}

bool controledegastos::setDespesas(despesa d, int pos){
    if(d.getValor() != 0){
        despesas[pos].setValor(d.getValor());
        despesas[pos].setTipoDeGasto(d.getTipoDeGasto());
        return true;
    }else{
        return false;
    }
}

double controledegastos::calculaTotalDespesas(){
    double soma = 0;

    for(int i = 0; i<MAX_VETOR; i++)
        soma += despesas[i].getValor();

    return soma;
}

bool controledegastos::existeDespesaDoTipo(std::string tipo){
    for(int i = 0; i<MAX_VETOR; i++){
        if(tipo == despesas[i].getTipoDeGasto()){
            return true;
        }
    }
    return false;
}
