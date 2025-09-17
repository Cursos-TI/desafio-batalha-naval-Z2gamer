#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main(){

    int tabuleiro[10][10]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    
    //Valores das Posições dos navios
    const int linhaVertical = 2;
    const int colunaVertical = 1;

    const int linhaHorizontal = 5;
    const int colunaHorinzontal = 7;

    //validação do tamanho
    if(linhaVertical + 3 <=10){
    //Vertical
        for(int i=0; i < 3; i++){
            tabuleiro[linhaVertical + i][colunaVertical]=3;
        }
    }else{
        printf("Dimensões do Navio Vertical inválidas\n");
        return 1;
    }

    //Sobreposição dos Navio

    if(colunaHorinzontal +3 <=10){
        int sobreposiçao = 0;
        for(int i=0; i < 3; i++){
            if(tabuleiro[linhaHorizontal][colunaHorinzontal+i] ==3){
                sobreposiçao = 1;
                break;
            }
        }

        if(!sobreposiçao){
            //Horizontal
            for(int i=0; i < 3; i++){
                tabuleiro[linhaHorizontal][colunaHorinzontal + i]=3;
            }
        }else{
            printf("Navios estão em colisão\n");
            return 1;
        }
       
    }else{
        printf("Dimensoes do Navio Horizontal inválidas\n ");
        return 1;
    }

    //Printf da matriz toda
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
