#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "despesa.h"
#include <iostream>

#define MAX_VETOR 100

class controledegastos
{
    private:
        despesa despesas[MAX_VETOR];
    public:
        controledegastos();
        double calculaTotalDespesas();
        bool setDespesas(despesa d, int pos);
        bool existeDespesaDoTipo(std::string tipo);
};

#endif // CONTROLEDEGASTOS_H
