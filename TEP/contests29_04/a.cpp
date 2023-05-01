#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b,n;
    int sol = 0;
    cin >> n >> a >> b;
    int * c = new int[n];
    vector<int> i;
    find
    for (int i = 0;i < n;i++){
        cin >> c[i];
    }
    int aux = a+b;
    while(n--){
        if (c[n] == aux){
            sol = n + 1;
        } else{continue;}
    }

    cout << sol;
}