#include <stdio.h>
int Repete1(int numero, int digito){
    if(numero < 10){
        return (numero == digito)? 1 : 0;
    }
    else
    {
        int cout = (numero%10 == digito)? +1 : 0;
        return cout + Repete1(numero/10,digito);
    }
    
}
int main(void){
    int numero,digito;
    scanf("%d %d",&numero,&digito);
    printf("Numero de ocorrencias: %d",Repete1(numero,digito));
    return 0;
}