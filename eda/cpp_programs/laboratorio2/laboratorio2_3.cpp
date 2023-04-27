#include <iostream>


void addCharInVet(char * pvetCar, int ptammax, int & pqtde){
    char ch;
    std::cout << "Escreva o caractere a ser inserido: ";
    std::cin >> ch;
    if (ptammax > pqtde){
        pvetCar += pqtde + 1;
        *pvetCar = ch;
        pqtde += 1;
        std::cout << "Caractere " << ch << " inserido na posicão " << pqtde - 1  << " do vetor com tamanho "<< ptammax << std::endl;
    } else {std::cerr << "ERRO Vetor com capacitacao max"<<std::endl;}
}

/* void rmCharInVet(char & pvetCar, int ptammax, int pqtde){
    std::cout << "Qual Caractere deve ser removido?";
    
} */

int main(){
    int lc;
    int pqtde = 0;
    int ptammax;
    int opt;
    std::cout << "Escreva a quantidade de elementos no vetor: ";
    std::cin >> ptammax;
    char * pvetCar = new char[ptammax];
    
    do {
       char resp;
        std::cout << "Escolha a operação: " <<std::endl << "1-Add Char" << std::endl << "2-Remove Char"<<std::endl;
        std::cin >> opt;
       switch (opt)
        {
        case 1:
            addCharInVet(pvetCar,ptammax,pqtde);
            break;
        case 2:
            break;
        default:
            std::cerr << "Operação Invalida";
            break;
        } 
        std::cout << "Deseja continuar?(Y/n) ";
        std::cin >> resp;
        lc = (resp == 'Y' || resp == 'y') ? 1 : 0;
        
    }while(lc);  
    std::cout << "Vetor\n" << "Tamanho: "<<ptammax << std::endl << "Quantidade de elementos: "<<pqtde<<std::endl << "Elementos:\n";
    for (int i = 0;i <= ptammax; i++){
        std::cout << pvetCar[i] << std::endl;
    }
    delete[] pvetCar;
    return 0;
}