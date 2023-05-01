#include <bits/stdc++.h>
using namespace std;
#define i int
#define s string

/*
Three people, A, B and C, are trying to communicate using transceivers. They are standing along a number line, and the coordinates of A, B and C are aa, bb and cc (in meters), respectively. Two people can directly communicate when the distance between them is at most dd meters. Determine if A and C can communicate, either directly or indirectly. Here, A and C can indirectly communicate when A and B can directly communicate and also B and C can directly communicate. */

i a,b,c,d;
s resp;
void sol(){
    /*Eh importante ressaltar que o problema dado especifica que os valores de a b e c nunca serao negativos
    Sabendo disso eh possivel afirmar que a distancia de qualquer um dos pontos para um outro 
    qualquer sempres sera positiva.*/
    i a_c = abs(a-c),a_b = abs(a-b),b_c = abs(b-c);
    if(a_c <= d){
        /*Neste caso, A e C estao relativamente x de distancia um do outro, se x <= d entao eles 
        podem se comunicar diretamente, caso falso, deve-se aferir se eles podem se comunicar 
        indiretamente
        */
        resp = "Yes";
    } else if(a_b <= d && b_c <= d){
        /*Neste caso, se a distancia a_b for menor ou igual a d, entao eles se comunicam direto. Caso a distancia b_c seja menor ou igual a d, A e C podem se comunicar, so que neste caso
        indiretamente.*/
        resp = "Yes";
    }  else{
        resp = "No";
    }
}

int main(){
    cin >> a >> b >> c >> d;
    sol();
    cout << resp << endl;
    return 0;
}