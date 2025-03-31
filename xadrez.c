/*Desafio xadrez movimento de peças 
Torre: 5 casas para a direita;
Bispo: 5 casas na diagonal para cima e para a direita;
Rainha: 8 casas para a direita*/


#include <stdio.h>

// criando função para mover torre 5 vezes para a direita
void mover_torre(int casas){
    if (casas > 0){
    printf("Direita \n");
    mover_torre(casas - 1);// decrementanto em 1
    }
}

// criando a função para mover o Bispo 5 vezes na diagonal direita
void mover_bispo(int casas){
    int bispo = 0;
    printf("Movendo o bispo: \n");

    do{
        printf("Cima, Direita\n", bispo);
        bispo ++;

    } while (bispo < 5);
}

// criando a função para mover a rainha
void mover_rainha(int casas){
    casas = 0;
    printf("Movendo a Rainha: \n");

    while (casas <= 8){
        printf("Esquerda\n");
        casas += 1;

    }
}


int main(){

    // chamndo a função recursiva para o movimento da torre
    printf("Movendo a Torre: \n");
    mover_torre(5);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


    // chamando a função recursiva para movimento do bispo
    mover_bispo(5);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


    // chamando a função recurciva para movimento da rainha
    mover_rainha(8);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    //movimento do cavalo 2 vezes para cima 1 para a direita com loops aninhados 
    int cavalo = 1;
      
    printf("Movimento do Cavalo: \n");
      while (cavalo --){
          for (int i = 1; i <= 2; i++){
              printf("Cima\n");
          }
          printf("Direita\n");
      }
return 0;
}