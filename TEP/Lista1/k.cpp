#include <bits/stdc++.h>
using namespace std;

int main(){
    string string;
    cin >> string;
    string::difference_type numero_de_Bs = count(string.begin(),string.end(),'B');
    while(numero_de_Bs--){
        size_t i = string.find_first_of('B');
        if( i != 0){
        string.erase(i-1,1);
        string.erase(i-1,1);
        } else{string.erase(i,1);}
    }
    cout << string;
    return 0;
}