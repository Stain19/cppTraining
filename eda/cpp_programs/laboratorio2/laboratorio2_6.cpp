#include <bits/stdc++.h>
using namespace std;

void solicitar_propriedades_vetor(int * ponteiro_capacidade_maxima,int * ponteiro_quantidade_a_ser_inserida,char nome){
    cout << "Digite a capacidade maxima de elementos no vetor " << nome<<":";
    cin >> *ponteiro_capacidade_maxima;
    cout<<endl<<"Digite a quantidade de elementos a ser preenchida no vetor "<<nome<< " aleatoriamente: ";
    cin >> *ponteiro_quantidade_a_ser_inserida;
}

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

bool Eigual(int * pveta, int * pvetb,int * ptama,int* ptamb){
    if(*ptama == *ptamb){
        for(int i = 0;i < *ptama; i++){
            if(pveta[i] == pvetb[i]){
                continue;
            } else{
                return false;
            }
        }
        return true;
    } else{
        return false;
    }
}


int main(){
    int capacidade_maxima_A,quantidade_a_ser_inserida_A,capacidade_maxima_B,quantidade_a_ser_inserida_B;

    int* ponteiro_capacidade_maxima_A = &capacidade_maxima_A;
    int* ponteiro_quantidade_a_ser_inserida_A = &quantidade_a_ser_inserida_A;

    int* ponteiro_capacidade_maxima_B = &capacidade_maxima_B;
    int* ponteiro_quantidade_a_ser_inserida_B = &quantidade_a_ser_inserida_B;

    solicitar_propriedades_vetor(ponteiro_capacidade_maxima_A,ponteiro_quantidade_a_ser_inserida_A,'A');
    solicitar_propriedades_vetor(ponteiro_capacidade_maxima_B,ponteiro_quantidade_a_ser_inserida_B,'B');

    int * vetorA = new int[*ponteiro_capacidade_maxima_B];
    int * vetorB = new int[*ponteiro_capacidade_maxima_A];
    
    inserir_valores_aleatorios(vetorA,ponteiro_capacidade_maxima_A,ponteiro_quantidade_a_ser_inserida_A);
    inserir_valores_aleatorios(vetorB,ponteiro_capacidade_maxima_A,ponteiro_quantidade_a_ser_inserida_B);

    if(Eigual(vetorA,vetorB,ponteiro_capacidade_maxima_A,ponteiro_capacidade_maxima_B)){
        cout<<"Iguais";
    }else{
        cout<<"Nao Iguais";
    }
    return 0;
}