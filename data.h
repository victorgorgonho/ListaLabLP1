#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

class Data{
    private:
        int dia;
        int mes;
        int ano;

    public:
        Data();
        Data(int dia, int mes, int ano);
        int getDia();
        int getMes();
        int getAno();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        void avancarDia();
};

#endif // DATA_H_INCLUDED
