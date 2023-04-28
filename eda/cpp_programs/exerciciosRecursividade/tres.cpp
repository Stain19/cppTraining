#include <iostream>
using namespace std;
/*
    Escreva uma função recursiva para calcular o n-ésimo termo de Fibonacci. 

    Para a resolucao deste exercicio, precisarei solicitar ao usuario o n-esimo termo dentro da 
    sequencia de fibonacci. Logo apos isso, eh necessario que a funcao fib(n) retorne o numero 
    correspondete ao n-esimo termo, respeitando as seguintes condicoes: 
        ~> Para n = 0, retorne 0;
        ~> Para n = 1, retorne 1;
        ~> Para n > 1, retorne fib(n-1) + fib(n-2)
    A sequencia de fibonacci eh uma sequencia de numeros, tendo como primeiro termo o numero 1, os numeros seguintes serao representados pela soma do seu antecessor, logo o segundo termo (fib(2)) sera 1 + fib(1) = 1, visto que 1 + 0 = 1; Podemos considerar a seguinte formula geral 
    para a condicao de parada => if(n == 0){return 1;} -> fib(n-1) + fib(n-2)

*/

long int fib(int n){
    if(n == 1 || n == 2){
        //visto que fibonacci do termo 0(Primeiro) == 1
        return 1;
    } else {
        return fib(n-1) + fib(n-2); 
    }
}

int main(){
    int n;
    cout << "Retorno do valor do n-esimo termo da Sequencia de Fibonacci"<<endl << "N : ";
    cin >> n;
    long int resp = fib(n);
    cout << endl << resp;
    return 0;
}

/*Pode se perceber que comeca haver um problema de desempenho quando eh dado um n > 45
  A questao de desempenho poderia ser melhor resolvida se fosse sendo salvo os valores para os termos maiores ou iguais a 1 ate os 
  termos menores do que n
  Isso ficara para uma implementacao futura, tendo em vista que a proposta do problema eh apenas para a implementacao da sequencia
  de Fibonacci utilizando funcoes recursivas. Ainda eh necessario avancar mais nos conteudos de Estrutura de Dados e Algoritimos*/