#include <iostream>
#include "ListaEncadeada.hpp"
#include <limits>

using namespace std;


// Construir lista vazia
ListaEncadeada::ListaEncadeada() {
    this->primeiro = nullptr;
}

// --- Métodos ---  

// Inserir "elemento" na coleção. Sempre deve executar a inserção.
void ListaEncadeada::inserirNo(int algarismo) {
    No * novo = new No;
    if(novo == NULL){
        cout << "Falha na alocação de memória!";
        return;
    }

    novo->proximo = primeiro;
    novo->algarismo = algarismo;
    primeiro = novo;
}

int ListaEncadeada::buscaNo(int indice){
    No * aux = primeiro;

    for(int i = 1; i < indice; i++){
        aux = aux->proximo;
    }

    return aux->algarismo;
};

int ListaEncadeada::obterTamanho(){
    int count = 0;
    for(No *i = primeiro; i != NULL; i = i->proximo){
        count++;
    }
    return count;
}

void ListaEncadeada::resetaNumero(){
  No * aux = primeiro;

  while(primeiro != nullptr){
      aux->proximo = nullptr;
  }
}