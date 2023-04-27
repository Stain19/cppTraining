#include <iostream>

int* CriaVetInt(std::streamsize numElement){
    int * ponteiroVetInt = new int[numElement];
    return ponteiroVetInt;
}

float* CriaVetFloat(std::streamsize numElement){
    float* ponteiroVetFloat = new float[numElement];
    return ponteiroVetFloat;
}

int main(){
    std::streamsize numElement;
    std::cout << "Insira o numero de elementos:";
    std::cin >> numElement;
    CriaVetInt(numElement);
    std::cout << std::endl << std::size_t(numElement);

}