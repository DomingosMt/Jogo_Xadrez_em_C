#include <stdio.h>

int main()
{
    // === Jogo de Xadrez em C ===

    // Objetivo:
    // Bispo - Mover 5 casas na diagonal superior direita
    // Torre - Mover 5 casas superior
    // Rainha - Mover 8 casas para a esquerda

    //Nível Novato

    //Variáveis de movimento
    int cima = 0, esquerda = 0, direita = 0, baixo = 0;

    // printf("*** JOGO DE XADREZ EM C ***\n\n");

    // // Lógica para a movimentação do Bispo | Estrutura while
    printf("Peça: Bispo\n");
    while ((cima < 5) && (direita < 5))
    {
        printf("Cima, Direita\n");
        cima++;
        direita++;
    }

    printf("\n"); //Espaçamento
    
    // // Lógica para a movimentação da Torre | Estrutura for
    printf("Peça: Torre\n");
    for (direita = 0; direita < 5; direita++)
    {
        printf("Direita\n");
    }

    printf("\n"); //Espaçamento

    // // Lógica para a movimentação da Rainha | Estrutura do-while
    printf("Peça: Rainha\n");
    do
    {
        printf("Esquerda\n");
        esquerda++;
    } while (esquerda < 8);

    printf("\n"); //Espaçamento

    // Nível Aventureiro

    // Lógica para a movimentação do cavalo | Estrutura de loop aninhadas
    
    printf("Peça: Cavalo\n");
    esquerda = 0;
    while (esquerda < 1)
    {
        esquerda++;
        for (baixo = 0; baixo <= 1; baixo++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    //Fim do Jogo
    
    return 0;
}