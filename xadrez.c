/*Desafio xadrez movimento de peças 
Torre: 5 casas para a direita;
Bispo: 5 casas na diagonal para cima e para a direita;
Rainha: 8 casas para a direita*/


#include <stdio.h>

int main(){
    

    
    //movendo a torre 5 vezes para a direita
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Movento a Torre: \n");

    for (int torre = 0 ; torre < 5; torre ++){
        printf("Diteira\n", torre);
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    //movendo p bispo 5 casas na dagonal direita
    int bispo = 0;
    printf("Movendo o bispo: \n");

    do{
        printf("Cima, Direita\n", bispo);
        bispo ++;

    } while (bispo < 5);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    // movendo a rainha 8 vezes para a direita
    int rainha = 0;
    printf("Movendo a Rainha: \n");

    while (rainha <= 8){
        printf("Esquerda\n");
        rainha ++;
    
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

return 0;




}