#include <stdio.h>

int main() {
   
    int bispo = 1, rainha = 1, cavalo = 1;
// Movimento Torre: 5 casas para a direita (utilizando for)
printf("Movimento da Torre:\n");
for (int torre = 0; torre < 5; torre++){
    printf("Direita\n"); // imprime a direção do movimento
};

// Movimento do Bispo: 5 casas para a diagonal esquerda (utilizando while)
printf("Movimento do Bispo:\n");
    while (bispo <=5){
        printf("Cima Esquerda\n"); // imprime a direção do movimento
        bispo++;
    }; 
// Movimento da Rainha: 8 casas para a esquerda (utilizando do-while)
printf("Movimento Rainha:\n");
    do {
        printf("Esquerda\n"); // imprime a direção do movimento
        rainha++;
    } while(rainha <=8);

// Movimento do Cavalo em L(utilizando loops aninhados)
printf("Movimento Cavalo:\n");
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++){
            printf("Cima\n"); // imprime a direção do movimento inicial
        }
        printf("Direita\n"); // imprime a direção do movimento final
    };
return 0;


}