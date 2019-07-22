#include "data.h"
#include <iostream>

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

Data::Data(int dia, int mes, int ano)
:Data(){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    if(dia < 1 || dia > 31)
        this -> dia = 1;
    else
        this -> dia = dia;
}

void Data::setMes(int mes){
    if(mes < 1 || mes > 12)
        this -> mes = 1;
    else
        this -> mes = mes;
}

void Data::setAno(int ano){
    if(ano < 1)
        this -> ano = 1;
    else
        this -> ano = ano;
}

void Data::avancarDia(){
    //Avancar dia dos meses com 30 dias.
    if(dia >= 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
            setDia(1);
            setMes(mes + 1);
    //Avançar dia dos meses com 31 dias.
    }else if(dia >= 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
        if(mes == 12){
            setDia(1);
            setMes(1);
            setAno(getAno() + 1);
        }else{
            setDia(1);
            setMes(mes + 1);
        }
    //Avançar dia de fevereiro.
    }else if(dia >= 28 && mes == 2){
        setDia(1);
        setMes(mes + 1);
    }else{
        setDia(dia + 1);
    }
}
