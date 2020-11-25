#include <iostream>

#include "../Calculadora/Calculadora.hpp"
#include "../ListaEncadeada/ListaEncadeada.hpp"

using namespace std;

void menu(){
    cout << "---------------------------------------------" << endl;
    cout << "Escolha uma opção digitando o número da ação:" << endl;
    cout << "1- Ler número" << endl;
    cout << "2- Preencher operando e exibir resultado" << endl;
    cout << "3- Resetar resultado" << endl;
    cout << "4- Somar número" << endl;
    cout << "5- Subtrair número" << endl;
    cout << "6 -Multiplicar por número " << endl;
    cout << "---------------------------------------------" << endl;
}


int main(){

    int decisao = 0;
    int algarismo, count, operandoAlgarismo;
    bool parar = false;
    bool decisaoContinuar, decisaoLoop;
    Calculadora calc;

        while(parar != true){
            menu();
            cin >> decisao;

                while(decisao > 6){
                    cout << "Por favor, digite uma ação válida" << endl;
                    cin >> decisao;
                }
            
                switch(decisao){
                    case 1: 
                    if(decisao == 1){
                        cout << "Por favor digite umq algarismo para compôr um número" << endl;
                        cin >> algarismo;
                        calc.preencheOperando(algarismo);

                        cout << "---------------------------------------------" << endl;
                        cout << "Preencha o operando de onde deseja obter o algarismo" << endl;
                        cout << "---------------------------------------------" << endl;
                            cin >> operandoAlgarismo;
                            calc.exibeNumeros(operandoAlgarismo);

                        cout << "---------------------------------------------" << endl;
                        cout << "Você deseja inserir mais algarismos? 1 para sim e 2 para não" << endl;
                        cout << "---------------------------------------------" << endl;
                            cin >> decisao;
                                if(decisao == 1){
                                    while(decisaoContinuar != false){
                                        cout << "insira mais algarismos" << endl;
                                        cin >> algarismo;
                                        calc.preencheOperando(algarismo);
                                        count++;

                                        cout << "---------------------------------------------" << endl;
                                        cout << "Deseja continuar? 1 para sim 2 para não" << endl;
                                        cout << "---------------------------------------------" << endl;
                                            cin >> decisaoLoop;

                                        if(decisaoLoop == 2){
                                            decisaoContinuar = false;
                                        }
                                    }
                                }else{
                                    break;
                                }
                        }
                        break;
                    case 2: 
                    if(decisao == 2){
                        cout << "Agora vamos preencher os operandos e exibir os resultados" << endl;
                        cout << "Preencha os operandos" << endl;
                        cout << "Digite um número negativo para parar a execução deste e pular para o pŕoximo operando" << endl;
                            cin >> operandoAlgarismo;
                        cout << "Operando lido" << endl;
                            
                        calc.preencheOperando(operandoAlgarismo);

                        cout << "Digite em qual operando quer obter o algarismo" << endl;
                            cin >> operandoAlgarismo;
                        calc.exibeNumeros(operandoAlgarismo);

                    }
                        break;
                    case 3: 
                        if(decisao == 3){
                          
                        calc.resetaResultado();
                        
                    }
                      break;
                    case 4: 
                    if(decisao == 4){
                        cout << "Insira um algarismo por vez" << endl;
                        cout << "Para parar a inserção e passar para o próximo operando, digite um número negativo" << endl;
                          calc.preencheOperando(1);
                            calc.preencheOperando(2);
                            
                            calc.exibeNumeros(1);
                            cout << endl;
                            calc.exibeNumeros(2);
                            cout << endl;
                            
                            calc.somaNumeros();

                            calc.exibeNumeros(3);
                    }
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    default:
                        break;
                }
        }
    
    
    return 0;
}