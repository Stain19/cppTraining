#include <bits/stdc++.h>
using namespace std;

int potencia(int x_base,int n_potencia){
    if(n_potencia == 1){
        return x_base;
    }else {
        return x_base * potencia(x_base, (n_potencia - 1));
    }
}
int main(){
    int x,n;
    cout << "Insira o numero x e n, que sera o expoente de x: "<<endl;
    cin >> x >> n;
    int resultado = potencia(x,n);
    cout << resultado << endl;
    return 0;
}