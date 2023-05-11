#include <bits/stdc++.h>
using namespace std;

int somaDosDigitos(int numero){

    if(numero < 10){
        return numero;
    }else{
        return (numero%10) + somaDosDigitos((numero/10));
    }
}
int main(){
    int numero;
    cout << "Insira o número: " << endl;
    cin >> numero;
    cout << "Soma dos Dígitos deste número: "<< somaDosDigitos(numero);
    return 0;
}