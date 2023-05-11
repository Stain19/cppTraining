#include <bits/stdc++.h>
using namespace std;

int maiorElemento(int vetor[], int maior,int tamanho){
    if(tamanho == 1 ){
        return maior;
    }else if(vetor[tamanho-1] > maior){
        maior = vetor[tamanho-1];
    }else{
        return maiorElemento(vetor,maior,(tamanho-1))
    }
}

int main(){
    int tamanho;
    cout << "Insira o tamanho do vetor: " << endl;
    cin >> tamanho;
    int * vetor = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cout << "Numero n°"<< i+1 << ": ";
        cin >> vetor[i];
    }
    int maior = maiorElemento(vetor,0,tamanho);
    cout << maior << endl;
    return 0;
}