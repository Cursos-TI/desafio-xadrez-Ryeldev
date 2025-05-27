#include <stdio.h>

int main() {
   
    //Movimento da Torre: 5 casa para a direita (Usando o while)
    int i = 1;
        printf("\nMovimento do Torre: \n");

    while (i <= 5) 
    {
        printf("Direita \n", i);

        i++;
    }
    
        //Movimento da Bispo: 5 casa para na diagonal (Usando o do-while)
        printf("\nMovimento do Bispo: \n");

        i = 0;

    do {

        printf("Cima Direita\n");
        i++;
    } while (i < 5);

     //Movimento da Rainha: 8 casa para a esquerda (Usando o FOR)
         printf("\nMovimento da Rainha: \n");

         i = 0;

        for(i = 0; i < 8; i++) {
            printf("Direita\n");
        }


    return 0;
}
