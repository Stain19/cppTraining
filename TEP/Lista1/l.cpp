#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,resultado = 0;
    cin >> n;
    resultado = (n % 2 == 0)? n/2 : -((n+1)/2);
    cout << resultado;
    return 0;
}