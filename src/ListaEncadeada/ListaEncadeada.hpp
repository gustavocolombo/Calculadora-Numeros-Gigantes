#ifndef LISTAENCADEADA_HPP
#define LISTAENCADEADA_HPP

class No {
    public:
        int algarismo;
        // Referência para o nó que vem após o atual
        No* proximo;
};

class ListaEncadeada {
    private:
        No no;

        No* primeiro;

        unsigned int tamanho;

        friend class Calculadora;

    public:
        // Construtores
        ListaEncadeada();

        //Método para inserir algorismo na lista de forma unitária.
        void inserirNo(int algarismo);
        //Método para buscar algorismos para utilizar na operações aritméticas posteriormente.
        int buscaNo(int indice);
        //Método para encontrar o tamanho da lista para utilizar nas operações aritméticas.
        int obterTamanho();
        
        void resetaNumero();

};

#endif