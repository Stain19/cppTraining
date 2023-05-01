#include <bits/stdc++.h>
using namespace std;

/*
Incompleto
*/

double soma_serie(double n, double * valores, int *numeradores_menoresQueDenominadores){
    double resultado = 0;
    for(int i = 0;i<(int)n;i++){
        *numeradores_menoresQueDenominadores += (i+1 < valores[i])? 1 : 0;
        resultado += (i+1)/valores[i];
    }
    return resultado;
}

int main(){
    double n;
    cout << "Digite a quantidade de numeros a ser lido:";
    cin >> n;
    double * valores = new double[(int)n];
    int zero = 0;
    int * numeradores_menores_denominador = &zero;
    for(int i = 0;i<(int)n;i++){
        double valor;
        cin >> valor;
        valores[i] = valor;
    }
    double resultado = soma_serie(n,valores,numeradores_menores_denominador);
    cout << "Numero de termos: " << (int)n << endl << "Valor da soma: " << setprecision(2) << resultado <<endl << "Termos com o numerador menor que o denominador: "<< *numeradores_menores_denominador;
    delete[] valores;
    return 0;
}