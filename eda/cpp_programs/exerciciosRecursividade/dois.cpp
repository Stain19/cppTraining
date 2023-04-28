#include <iostream>
using namespace std;
/*
    Implemente uma função recursiva que verifique se duas strings são iguais (retorne 1) ou 
    não (retorne 0).
        *Se duas strings são vazias, elas são iguais;
        *Se todos os seus caracteres são iguais, elas são iguais.
    -----------------------------------------------------------------------------------------------
    A comparação segue as seguintes etapas:
        1° -> Aferir se as strings possuem o mesmo tamanho, caso não retorne 0;
        2° -> Caso possuam o mesmo tamanho, fazer a comparação caractere a caractere, começando do 
        ultimo char até o primeiro
            2.1° -> condição de parada
            2.2° -> chamada recursiva
*/
int strings_iguais(char * string_um, char * string_dois){
    if(string_um == NULL && string_dois == NULL){
        //condicao de parada
        //Caso as string estejam vazias(Util no primeiro instante da recursividade)
        return 1;
    }
    else if(*string_um != *string_dois){
        //condicao de parada
        //Caso o caractere da string_um for diferente do caractere da string_dois
        return 0;
    } else if(*string_um == 0 && *string_dois == 0){
        //condicao de parada
        /*Caso o ponteiro das duas string atinja EOF, significa que em todas as outras chamadas, 
        os caracteres eram iguais.*/
        return 1;
    } else{
        return strings_iguais((string_um + 1),(string_dois + 1));
    }
}

int main(){
    char string_um[4] = "Ola";
    char string_dois[4] = "Ola";
    char string_tres[4] = "OLA";
    string resp1 = (strings_iguais(string_um,string_dois))? "Sim" : "Nao";
    string resp2 = (strings_iguais(string_um,string_tres)) ? "Sim":"Nao";
    cout << "String_um e String_dois sao iguais? " << resp1 << endl;
    cout << "String_um e String_tres sao iguais? " << resp2 << endl;
    return 0;
}