#include <iostream>
using namespace std;
/*
    Escreva uma função recursiva que retorne a soma dos elementos de um vetor: long int somavet
    (int *vetor, int qtde)
*/

void printElementosVetor(int * vetor,int tamanhoVetor){
    cout << "Elementos vetor: "<<endl;
    int pos;
    for(pos = 0; pos < tamanhoVetor; pos++){
        cout << vetor[pos] << " ";
    }
}

/*Apesar de nao ter sido requisitado, irei fazer uma funcao que retorna valores aleatorios para 
serem guardados dentro do vetorA.
Nao eh necessario a adocao de uma funcao recursiva, apenas um laco eh suficiente.*/
void valoresVetorRandom(int* vetorA,int tamanhoVetor){
    for(int i = 0; i < tamanhoVetor ; i++){
        //gerando valor aleatorios entre 0 e 100
        vetorA[i] = rand() % 100;
    }
}

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
    int qtde;
    //Requisitando ao usuario o tamanho do vetor
    cout << "Qual o tamanho do vetor? ";
    cin >> qtde;
    int * vetorA = new int[qtde];
    valoresVetorRandom(vetorA,qtde);
    printElementosVetor(vetorA,qtde);
    cout << endl << "Somas:" << endl << somavet(vetorA,qtde);
    return 0;
}