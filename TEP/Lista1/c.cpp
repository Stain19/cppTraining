#include <iostream>
using namespace std;

/*
    Takahashi está resolvendo alguns quiz. O ultimo quiz que ele está resolvendo tem 3 questoes.
    Ele descobriu que A e B estao errados.
    Entregue a resposta correta do ultimo quiz.
    ~> ENTRADA: A e B
    ~> SAIDA: CORRECT ANSWER
    Sabendo que 1+2 % 3 == 0; 3+2 % 1 == 0; 3+1 % 2 == 0;
    Isso nos retorna qual número é o correto.
*/

int sol(int A,int B){
    if((A+B) % 2 == 0){
        return 2;
    } else if((A+B) % 3 == 0){
        return 3;
    } else{return 1;}
}

int main(){
    int A,B;
    cin >> A >> B;
    cout << sol(A,B);
    return 0;
}