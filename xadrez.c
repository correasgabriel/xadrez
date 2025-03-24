#include <stdio.h>

int main() {
   
    int bispo = 1, rainha = 1;
// Movimento Torre: 5 casas para a direita (utilizando for)
printf("Movimento da Torre:\n");
for (int torre = 0; torre < 5; torre++){
    printf("Direita\n"); // imprime a direção do movimento
};

// Movimento do Bispo: 5 casas para a diagonal esquerda (utilizando while)
printf("Movimento do Bispo:\n");
    while (bispo <=5){
        printf("Cima Esquerda\n");
        bispo++;
    }; 
// Movimento da Rainha: 8 casas para a esquerda (utilizando do-while)
printf("Movimento Rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while(rainha <=8);
return 0;


}