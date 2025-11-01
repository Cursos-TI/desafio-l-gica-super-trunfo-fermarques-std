#include <stdio.h>

int main() {

    int torre = 0;
    int rainha = 0;
    int bispo;

    //Mover a Torre 5 casas para a direita
    
    while (torre <= 4){
        printf(" Torre se moveu para a Direita\n");

        torre ++;
    }

    

    // Mover a Rainha 8 casas para a esquerda 

    do {

        printf("Rainha se moveu para Esquerda\n ");
       
        rainha++;
    } while (rainha < 8);
    


    // Mover o bispo 5 casas na diagonal (cima,esquerda)
    for ( bispo = 0; bispo < 5 ; bispo++)
    {
        printf("Bispo se moveu para Cima Esquerda \n");// Imprime que o bispo se moveu 5 vezes para Cima na esquerda
    
    }
    


    return 0;
}