//
// Created by EDGAR on 10/06/2021.
//

#ifndef AFD_PROYECT_AFD_H
#define AFD_PROYECT_AFD_H

#include "state.h"



class AFD{
private:
    int n_states;
    state** array;
    int s_inicial;
    int* a_final;
public:
    AFD(int n, int ind_inicial, int n_final, int* f_array);
    void crear_conecction(int base,int conection,int final);
    void crear_automaton(){
        state** n_array = new state*[pow(2,n_states)-1-n_states];
        for(int i=0 ; i<)
    }
};




#endif //AFD_PROYECT_AFD_H
