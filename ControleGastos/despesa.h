#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

class despesa
{
    public:
        despesa();
        double getValor();
        std::string getTipoDeGasto();
        void setValor(double valor);
        void setTipoDeGasto(std::string tipoDeGasto);

    private:
        double valor;
        std::string tipoDeGasto;
};

#endif // DESPESA_H
