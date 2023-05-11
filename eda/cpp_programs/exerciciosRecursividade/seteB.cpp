#include <bits/stdc++.h>
using namespace std;

int elementoVetor(int vetor[],int tamanho,int elemento_vetor){
    if(vetor[tamanho - 1] == elemento_vetor){
        return (tamanho + 2);
    }
    else{
        return elementoVetor(vetor,tamanho-1,elemento_vetor);
    }
}

int main(){
    int tamanho;
    cout << "Insira o tamanho do vetor: ";
    cin >> tamanho;
    int * vetor = new int[tamanho];
    for(int i = 0;i < tamanho;i++){
        cout << "Numero n°"<< i+1 << ": ";
        cin >> vetor[i];
    }
    int elemento_vetor;
    cout << "Digite o valor do elemento a ser encontrado: ";
    cin >> elemento_vetor;
    int resultado = elementoVetor(vetor,tamanho,elemento_vetor);
    cout << "Numero na posicao: "<< resultado - tamanho  << endl;
    return 0;
}