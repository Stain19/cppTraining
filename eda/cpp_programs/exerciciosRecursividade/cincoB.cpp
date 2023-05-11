#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if(a % b == 0){
        return b;
    }
    else{
        return mdc(b,(a%b));
    }
}

int main(){
    int a, b;
    cout << "Digite os numero a e b para calcular (a,b): "<<endl;
    cin >> a >> b;
    int resultado = mdc(a,b);
    cout << resultado << endl;
    return 0;

}