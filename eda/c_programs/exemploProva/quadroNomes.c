#include <stdio.h>

char *acheSobrenome(char nome[]){
    char *pnome;
    int i = 0;
    while(nome[i] != ' '){
        i++;
    }
    i++;
    pnome = &nome[i]; //resposta
    
    return pnome;
}

int main(void){
    char nomeCompleto[80];
    char *p;
    puts("Entre com o seu nome e sobrenome:");
    scanf("%79[^\n]", nomeCompleto); // Evita buffer overflow e lê até '\n' ou 79 caracteres
    p = acheSobrenome(nomeCompleto);
    printf("%s\n", p); // Corrigido formato de impressão
    return 0;
}
