//
// Created by EDGAR on 10/06/2021.
//

#ifndef AFD_PROYECT_AFD_H
#define AFD_PROYECT_AFD_H

#include "state.h"

class AFD{
private:
    int n_states; // Se guarda el numero de estados
    state** array; // Se guardan los estados
    int s_inicial; // Posicion del estado inicial
    int* a_final; // Array de posiciones con los estados finales
public:
    AFD(int n, int ind_inicial, int n_final, int* f_array);
    void crear_conecction(int base,int conection,int final); // Crea las conexiones del automata
    //bool crear_automaton() const;
    pair<vector<int>, string> hallar_0(pair<vector<int>, string> STR); // Retorna el camino al que el automata va con zero
    pair<vector<int>, string> hallar_1(pair<vector<int>, string> STR); // Retorna el camino al que el automata va con uno
    void help_MIN(); // Trabaja con el MINSINC y hace el cout
    void help_DEC();
    bool MINSINC(pair<vector<int>, string> actual, string &cadena); // Halla si la cedena es sincronizable
    bool DECSINC();
    bool singleton_or_visited(unordered_map<string, bool> visited);
};




#endif //AFD_PROYECT_AFD_H
