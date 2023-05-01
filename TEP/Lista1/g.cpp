#include <bits/stdc++.h>
using namespace std;
int main(){
    int cores[4];
    int iguais = 0;
    cin >> cores[0] >> cores[1] >> cores[2] >> cores[3];
    sort(cores,cores + 4);
    for(int i = 1; i< 4 ;i++){
        if( cores[i] == cores[i-1]){
            ++iguais;
        }
    }
    cout << iguais;
    return 0;
}