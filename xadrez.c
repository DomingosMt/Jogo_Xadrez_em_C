#include <stdio.h>

void movimentoTorre(int casa)
{
    if (casa > 0)
    {
        printf("Direita\n");
        movimentoTorre(casa - 1);
    }
}

void movimentoBispo(int casa1, int casa2)
{
    if (casa1 > 0 && casa2 > 0)
    {
        printf("Cima, Direita\n");
        movimentoBispo(casa1 - 1, casa2 - 1);
    }
}

void movimentoRainha(int casa)
{
    if (casa > 0)
    {
        printf("Esquerda\n");
        movimentoRainha(casa - 1);
    }
}

int main()
{

    // === Jogo de Xadrez em C ===

    // Objetivo:
    // Bispo - Mover 5 casas na diagonal superior direita
    // Torre - Mover 5 casas superior
    // Rainha - Mover 8 casas para a esquerda

    // Nível Novato

    // Variáveis de movimento
    int cima = 5, esquerda = 8, direita = 5, baixo = 0;

    printf("*** JOGO DE XADREZ EM C ***\n\n");

    // // Lógica para a movimentação do Bispo | Estrutura recursiva
    printf("Peça: Bispo\n");
    movimentoBispo(cima, direita);


    printf("\n"); // Espaçamento


    // // Lógica para a movimentação da Torre | Estrutura recursiva
    printf("Peça: Torre\n");
    movimentoTorre(direita);


    printf("\n"); // Espaçamento


    // // Lógica para a movimentação da Rainha | Estrutura do-while
    printf("Peça: Rainha\n");
    movimentoRainha(esquerda);


    printf("\n"); // Espaçamento
    

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

    // Fim do Jogo

    return 0;
}