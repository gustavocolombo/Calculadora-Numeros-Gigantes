#include "../ListaEncadeada/ListaEncadeada.hpp"

#ifndef CALCULADORA_HPP
#define CALCULADORA_HPP

class Calculadora{
  private:
    ListaEncadeada operando1;
    ListaEncadeada operando2;
    ListaEncadeada vetorResultado;
    
    friend class ListaEncadeada;
  public:
    void preencheOperando(int operando);
    
    void somaNumeros();

    void subtraiNumero();

    ListaEncadeada resetaResultado();

    ListaEncadeada multiplicaNumeros();

    void exibeNumeros(int operando);

};

#endif