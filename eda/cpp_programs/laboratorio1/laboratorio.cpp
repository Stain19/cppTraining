#include <iostream>
#include <cstring>
#include <fstream>
/*This program aims to read the name of a file, open it and then show all the
words in each line on a new file.
It should have:
- a function named Stop Words to remove words with less than 4 letters
    ° the fuction needs to remove commas or endpoints;
- a function named word2vec to creates a file with the words inside a string array, each one in each line

Passos:
 1°   -> Pedir ao usuário o nome do arquivo; V
 2°   -> Ler o file(fstream) de acordo com o nome dado; V
 3°   -> Verificar se o arquivo foi aberto ou se existe; V
 3.1° -> Do file, ler todos os caracteres presentes; V
 3.2° -> Declarar um vetor e armazenar nele todos os caracteres; V
 4°   -> Pegar o vetor com todos os caracteres e separá-los em palavras, retirando "," "." " " "endl"
         -> criar um vetor de strings 
 4.2° -> Separar palavras compostas com hífens e desconsiderar palavras com menos de 4 letras e palavras repetidas
 5°   -> Salvar as palavras em cada linha de um arquivo, cujo o nome é o original acrescido de "_Vocabulo"(ex.: Text.txt -> Text_Vocabulo.txt).

 OBS.: Letras maiusculas e minusculas não diferem as palavras
*/

void request_file_name(std::string &ref_file_name ){
    std::cout << "Insira o nome do arquivo: ";
    std::cin >> ref_file_name;
}

void stop_words(std::string old_string, std::string * new_string){
    for ( int i = 0; i < old_string.length(); i++){
        char ch = old_string[i];
        if(ch != 10 && ch != ',' && ch != '.' &&){}
    }
}

int main(){
    std::string file_name;
    std::streampos size;
    //requisita o nome do file
    request_file_name(file_name);
    std::ifstream file(file_name, std::ios::in);
    
    //verifica se o arquivo não foi aberto
    if(!file.is_open()){
        std::cerr << "ERRO AO ABRIR O ARQUIVO!" << std::endl;
        return 0;
    }
    //descobrir a quantidade de caracteres do arquivo
    file.seekg(0,std::ios::end);
    size = file.tellg();
    file.seekg(0, std::ios::beg);

    //ler e armazenar todos os caracteres dentro do arquivo
    std::string content(static_cast<std::string::size_type>(size),' ');
    file.read(&content[0],size);

    std::string * words = new std::string[300];
    stop_words(content, words);


    return 0;
}