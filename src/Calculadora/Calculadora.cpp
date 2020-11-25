#include <iostream>
#include "Calculadora.hpp"
#include "../ListaEncadeada/ListaEncadeada.hpp"
#include <limits>

using namespace std;

void Calculadora::preencheOperando(int operando){
    bool mark = true;

    while(mark){
        int algarismo;
        cin >> algarismo;

        if(algarismo >= 0){
            if(operando == 1){
                this->operando1.inserirNo(algarismo);
            }else{
                this->operando2.inserirNo(algarismo);
            }
        }else{
            mark = false;
        }

    }
}

void Calculadora::somaNumeros(){
    int maiorLista;
    int aux = 0;

    if(this->operando1.obterTamanho() >= this->operando2.obterTamanho()){
        for(int i = 1; i <= this->operando1.obterTamanho(); i++){
            if(i <= this->operando2.obterTamanho()){
                int soma = this->operando1.buscaNo(i) + this->operando2.buscaNo(i) + aux;

                aux = 0;

                if(soma > 9){
                    this->vetorResultado.inserirNo(soma%10);
                    aux = soma/10;
                }else{
                    this->vetorResultado.inserirNo(soma);
                }
            }else{
                int soma = this->operando1.buscaNo(i) + aux;

                aux = 0;

                if(soma > 9){
                    this->vetorResultado.inserirNo(soma%10);
                    aux = soma/10;
                }else{
                    this->vetorResultado.inserirNo(soma);
                }
            }
        }
    }else{
        for(int i = 1; i <= this->operando2.obterTamanho(); i++){
            if(i <= this->operando1.obterTamanho()){
                int soma = this->operando1.buscaNo(i) + this->operando2.buscaNo(i) + aux;

                aux = 0;

                if(soma > 9){
                    this->vetorResultado.inserirNo(soma%10);
                    aux = soma/10;
                }else{
                    this->vetorResultado.inserirNo(soma);
                }
            }else{
                int soma = this->operando2.buscaNo(i) + aux;

                aux = 0;

                if(soma > 9){
                    this->vetorResultado.inserirNo(soma%10);
                    aux = soma/10;
                }else{
                    this->vetorResultado.inserirNo(soma);
                }
            }
        }
    }
}

void Calculadora::subtraiNumero(){
   
}


ListaEncadeada Calculadora::multiplicaNumeros(){
    //need to fix

    return this->vetorResultado;
};


void Calculadora::exibeNumeros(int operando){
    int tamanho;

    if(operando == 1){
        tamanho = operando1.obterTamanho();

        for(int i = tamanho; i >= 1; i--){
            cout << operando1.buscaNo(i);
        }
    }else if(operando == 3){
        tamanho = vetorResultado.obterTamanho();

        for(int i = 1; i <= tamanho; i++){
            cout << vetorResultado.buscaNo(i);
        }
    }else{
        tamanho = operando2.obterTamanho();

        for(int i = tamanho; i >= 1; i--){
            cout << operando2.buscaNo(i);
        }
    }
}


ListaEncadeada Calculadora::resetaResultado(){
   vetorResultado.resetaNumero();
}