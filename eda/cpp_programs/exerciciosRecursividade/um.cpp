#include <iostream>
using namespace std;
/*
    Escreva uma função recursiva que retorne a soma dos elementos de um vetor: long int somavet
    (int *vetor, int qtde)
*/

long int somavet(int * vet, int qtde){
    long int soma = 0;
    //pega o valor do último elemento e adiciona a variável soma
    soma += vet[qtde-1];
    if (qtde == 0){
        //A condição de parada será quando todos os numeros tiverem sido somados, ou seja qtde == 0
        return soma;
    } else{
        return soma + somavet(vet,qtde - 1);
    }
}

int main(){
    //Utilizando um vetor 4 int
    int qtde = 4;
    int * vetorA = new int[qtde];
    vetorA[0] = 10;
    vetorA[1] = 20;
    vetorA[2] = 30;
    vetorA[3] = 40;
    cout << somavet(vetorA,qtde);
    return 0;
}