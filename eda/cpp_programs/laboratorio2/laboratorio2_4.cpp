#include <bits/stdc++.h>
using namespace std;

bool inserir_valores_aleatorios(double * ponteiro_vetor, int* ponteiro_capacidade_maxima, int* ponteiro_quantidade_a_ser_inserida){
    if(*ponteiro_capacidade_maxima != *ponteiro_quantidade_a_ser_inserida){
        for(int i = 0;i < *ponteiro_quantidade_a_ser_inserida;i++){
            ponteiro_vetor[i] = ((double)rand() / RAND_MAX)*100;
        }
        for (int i = *ponteiro_quantidade_a_ser_inserida; i < *ponteiro_capacidade_maxima; i++) {
            ponteiro_vetor[i] = 0.0; // preenche os demais elementos com 0
        }
        return true;
    } else{
        return false;
    }
}

bool inclusao_vetor(double * ponteiro_vetor, double * ponteiro_valor, int * ponteiro_capacidade_maxima, int* ponteiro_quantidade_atual_de_elementos){
    if(*ponteiro_capacidade_maxima == *ponteiro_quantidade_atual_de_elementos){
        return false;
    } else{
        ponteiro_vetor[*ponteiro_quantidade_atual_de_elementos] = *ponteiro_valor;
        *ponteiro_quantidade_atual_de_elementos = *ponteiro_quantidade_atual_de_elementos + 1;
        return true;
    }
}

int main(){
    int quantidade_atual_de_elementos = 0,capacidade_maxima;
    double valor;
    cout << "Insira a quantidade maxima de elementos no vetor: "<<endl;
    cin >> capacidade_maxima;
    cout << "Insira a quantidade de elementos no vetor: "<<endl;
    cin >> quantidade_atual_de_elementos;
    int *ponteiro_capacidade_maxima = &capacidade_maxima;
    int * ponteiro_quantidade_atual_de_elementos = &quantidade_atual_de_elementos;
    double * vetor_double = new double[*ponteiro_capacidade_maxima];
    if(inserir_valores_aleatorios(vetor_double,ponteiro_capacidade_maxima,ponteiro_quantidade_atual_de_elementos)){
        cout << "Valores inseridos com sucesso!"<<endl;
    }else{
        cerr<<"ERRO NA INSERCAO DE VALORES ALEATORIOS"<<endl;
        return 0;
    }
    cout <<"Insira o valor(double) para inserir no vetor: "<< endl;
    cin >> valor;
    double * ponteiro_valor = &valor;
    if(inclusao_vetor(vetor_double,ponteiro_valor,ponteiro_capacidade_maxima,ponteiro_quantidade_atual_de_elementos)){ 
        cout << "Valor inserido com sucesso"<<endl;}
        else{ 
            cout << "Vetor com capacidade maxima"<<endl;
            }
    for(int i = 0;i<*ponteiro_capacidade_maxima;i++){
        cout << vetor_double[i]<<endl;
    }
    delete[] vetor_double; 
    return 0;
}