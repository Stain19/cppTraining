#include <iostream>
#include <cstring>
#include <fstream>
/*Este programa mira ler o nome de um arquivo, abri-lo, ler todas as palavras e separa-las, depois coloca-las em um novo arquivo, contendo uma palavra por linha.

Deve conter:
- Uma funcao chamada stop_words, que deve:
    ~> Eliminar todas as palavras que contem menos de 4 caracteres;
    ~> Eliminar virgulas,pontos finais e qualquer outro caracter que nao componha uma palavra;
- Uma funcao chamada word2Vec, que deve:
    ~> Armazenar todas palavras obtidas da funcao stopwords;
    ~> Separar cada palavra e colocalas em linhas novas;
Passos:
 1°   -> Pedir ao usuário o nome do arquivo; V
 2°   -> Ler o file(fstream) de acordo com o nome dado; V
 3°   -> Verificar se o arquivo foi aberto ou se existe; V
 4°   -> Do file, ler todos os caracteres presentes;V
 3.2° -> Declarar um vetor e armazenar nele todos os caracteres; V
 4°   -> Pegar o vetor com todos os caracteres e separá-los em palavras, desconsiderando "," , "." , " " , 10 ,"-".   V
         -> criar um vetor de strings V
 4.2° -> Desconsiderar palavras com menos de 4 letras e palavras repetidas. <- word2vec
 5°   -> Criar um arquivo cujo o nome é o original acrescido de "_Vocabulo"(ex.: Text.txt -> Text_Vocabulo.txt).
 5°   -> Salvar as palavras em cada linha do _Vocabulo;

 OBS.: Letras maiusculas e minusculas não diferem as palavras
*/

void request_file_name(std::string &ref_file_name ){
    std::cout << "Insira o nome do arquivo: ";
    std::cin >> ref_file_name;
}

int stop_words(std::string old_string, std::string * new_string){
    int word_index = 0;
    for ( std::string::size_type ciclo = 0; ciclo < old_string.length(); ciclo++){
        char ch = old_string[ciclo];
        if(ch != 32 && ch != ',' && ch != '.' && ch != '-' && ch != 10){
            new_string -> push_back(ch);
        } else{
            new_string += 1;
            ++word_index;
        }
    }
    return word_index;
}

void word2Vec(std::ofstream & arquivo_vocabulo,std::string * palavras,int quantidade_de_palavras){
    for (int i = 0;i<quantidade_de_palavras;i++){
        size_t length = palavras[i].length();
        if(length >= 4){
            arquivo_vocabulo << palavras[i] << std::endl;
            ++i; 
        }
    }
}

int main(){
    std::string nome_do_arquivo;
    std::streampos tamanho;
    //requisita o nome do file
    request_file_name(nome_do_arquivo);
    std::ifstream arquivo(nome_do_arquivo, std::ios::in);
    
    //verifica se o arquivo não foi aberto
    if(!arquivo.is_open()){
        std::cerr << "ERRO AO ABRIR O ARQUIVO!" << std::endl;
        return 0;
    }
    //descobrir a quantidade de caracteres do arquivo
    arquivo.seekg(0,std::ios::end); //Coloca o ponteiro do arquivo ao final do arquivo(std::ios::end)
    tamanho = arquivo.tellg();//Retorna a posicao do ponteiro no file
    arquivo.seekg(0, std::ios::beg);//Devolve a posicao do ponteiro para o comeco

    //ler e armazenar todos os caracteres dentro do arquivo
    std::string conteudo(static_cast<std::string::size_type>(tamanho),' ');
    arquivo.read(&conteudo[0],tamanho);

    //Cria um array de strings, representando as palavras
    std::string * palavras = new std::string[300];
    int quantidade_de_palavras_alocadas = stop_words(conteudo, palavras);

    std::ofstream arquivo_vocabulo((nome_do_arquivo.append("_Vocabulo")));

    if(!arquivo_vocabulo.is_open()){
        std::cerr << "ERRO AO CRIAR O ARQUIVO!" << std::endl;
        return 0;
    }
    word2Vec(arquivo_vocabulo,palavras,quantidade_de_palavras_alocadas);
    std::cout << "Arquivo : " << nome_do_arquivo <<" Criado com sucesso"<<std::endl;
    return 0;
}