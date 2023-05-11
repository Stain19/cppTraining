#include <bits/stdc++.h>
using namespace std;

int multi(int a, int b){
    if(b == 1){
        return a;
    }
    else{
        return a + multi(a,(b-1));
    }
}

int main(){
    int a,b;
    cout << "Insira o número a e b: "<<endl;
    cin >> a >> b;
    int resultado = multi(a,b);
    cout << resultado;
    return 0;
}