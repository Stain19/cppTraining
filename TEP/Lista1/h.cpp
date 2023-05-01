#include <bits/stdc++.h>
using namespace std;
int main(){
    string nickName;
    cin >> nickName;
    set<char> caracteres_distintos;
    for(char c : nickName){
        caracteres_distintos.insert(c);
    }  
    if(caracteres_distintos.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    } else{cout << "IGNORE HIM!";}
    return 0;
}