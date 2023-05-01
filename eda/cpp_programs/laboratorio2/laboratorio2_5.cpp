#include <bits/stdc++.h>
using namespace std;

void inserir_valores_aleatorios(int * ponteiro_vetor, int* ponteiro_capacidade_maxima, int* ponteiro_quantidade_a_ser_inserida){
        for(int i = 0;i < *ponteiro_quantidade_a_ser_inserida;i++){
            int valor = rand();
            ponteiro_vetor[i] = valor;
        }
        for (int i = *ponteiro_quantidade_a_ser_inserida; i < *ponteiro_capacidade_maxima; i++) {
            ponteiro_vetor[i] = 0; // preenche os demais elementos com 0
        }
        cout << "Valores inseridos com sucesso!"<<endl;
}

bool remocao_vetor(int * ponteiro_vetor,int * ponteiro_quantidade_atual_de_elementos,int * ponteiro_valor){
    int indice_de_remocao = 0;
    for(int i = 0; i < *ponteiro_quantidade_atual_de_elementos; i++){
        if(ponteiro_vetor[i] == *ponteiro_valor){
            indice_de_remocao = i;
        }
    }
    if(indice_de_remocao){
        ponteiro_vetor[indice_de_remocao] = 0;
        cout << "Valor "<< *ponteiro_valor << " no indice "<<indice_de_remocao<<" removido do vetor"<<endl;
        return true;
    }else{
        return false;
    }
}

int main(){
    int quantidade_atual_de_elementos = 0,capacidade_maxima;
    int valor;
    cout << "Insira a quantidade maxima de elementos no vetor: "<<endl;
    cin >> capacidade_maxima;
    cout << "Insira a quantidade de elementos no vetor: "<<endl;
    cin >> quantidade_atual_de_elementos;
    int *ponteiro_capacidade_maxima = &capacidade_maxima;
    int * ponteiro_quantidade_atual_de_elementos = &quantidade_atual_de_elementos;
    int * vetor_int = new int[*ponteiro_capacidade_maxima];
    inserir_valores_aleatorios(vetor_int,ponteiro_capacidade_maxima,ponteiro_quantidade_atual_de_elementos);
    for(int i = 0;i<*ponteiro_capacidade_maxima;i++){
        cout << setprecision(0) << vetor_int[i]<<endl;
    }
    cout <<"Insira o valor(double) para ser removido do vetor: "<< endl;
    cin >> valor;
    int * ponteiro_valor = &valor;
    if(!remocao_vetor(vetor_int,ponteiro_quantidade_atual_de_elementos,ponteiro_valor)){
        cerr << "Nao foi possivel remover o valor"<<endl;
        }
    for(int i = 0;i<*ponteiro_capacidade_maxima;i++){
        cout << setprecision(0) <<vetor_int[i]<<endl;
    }    
    delete[] vetor_int; 
    return 0;
}