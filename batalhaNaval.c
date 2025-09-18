#include <stdio.h>

#define Navio 3

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
    int cone[3][5]={
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };
    int octo[3][5]={
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };
    int cruz[3][5]={
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };

    //Valores das Posições dos navios
    const int linhaVertical = 2;
    const int colunaVertical = 1;

    const int linhaHorizontal = 5;
    const int colunaHorinzontal = 7;

    const int linhaDiagonal1 = 8;
    const int colunaDiagonal1 = 0;

    const int linhaDiagonal2 = 4;
    const int colunaDiagonal2 = 6;

    const int linhaCone=7;
    const int colunaCone=2;

    const int linhaOcto=5;
    const int colunaOcto=5;

    const int linhaCruz=0;
    const int colunaCruz=3;

    //validação do tamanho
    if(linhaVertical + Navio <=10){
    //Vertical
        for(int i=0; i < Navio; i++){
            tabuleiro[linhaVertical + i][colunaVertical] = Navio;
        }
    }else{
        printf("Dimensões do Navio Vertical inválidas\n");
        return 1;
    }

    //Sobreposição dos Navio Horizontal
    if(colunaHorinzontal + Navio <=10){
        int sobreposiçao = 0;
        for(int i=0; i < Navio; i++){
            if(tabuleiro[linhaHorizontal][colunaHorinzontal + i] == Navio){
                sobreposiçao = 1;
                break;
            }
        }
        if(!sobreposiçao){
            //Horizontal
            for(int i=0; i < Navio; i++){
                tabuleiro[linhaHorizontal][colunaHorinzontal + i] = Navio;
            }
        }else{
            printf("Navios estão em colisão\n");
            return 1;
        }
       
    }else{
        printf("Dimensoes do Navio Horizontal inválidas\n ");
        return 1;
    }

    //Sobreposição dos Navios Diagonal 1
    if(colunaDiagonal1 + Navio <=10){
        int sobreposiçao = 0;
        for(int i=0; i < Navio; i++){
            if(tabuleiro[linhaDiagonal1 - i][colunaDiagonal1 + i] == Navio){
                sobreposiçao = 1;
                break;
            }
        }
        if(!sobreposiçao){
            //Horizontal
            for(int i=0; i < Navio; i++){
                tabuleiro[linhaDiagonal1 - i][colunaDiagonal1 + i] = Navio;
            }
        }else{
            printf("Navios estão em colisão\n");
            return 1;
        }
       
    }else{
        printf("Dimensões do Navio Horizontal inválidas\n ");
        return 1;
    }

    //Sobreposição dos Navios Diagonal 2
    if(colunaDiagonal2 + Navio <=10){
        int sobreposiçao = 0;
        for(int i=0; i < Navio; i++){
            if(tabuleiro[linhaDiagonal2 - i][colunaDiagonal2 + i] == Navio){
                sobreposiçao = 1;
                break;
            }
        }
        if(!sobreposiçao){
            //Horizontal
            for(int i=0; i < Navio; i++){
                tabuleiro[linhaDiagonal2 - i][colunaDiagonal2 + i] = Navio;
            }
        }else{
            printf("Navios estão em colisão\n");
            return 1;
        }
       
    }else{
        printf("Dimensões do Navio Horizontal inválidas\n ");
        return 1;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            tabuleiro[linhaCone+i][colunaCone+j]=cone[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            tabuleiro[linhaCruz+i][colunaCruz+j]=cruz[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            tabuleiro[linhaOcto+i][colunaOcto+j]=octo[i][j];
        }
    }


    //Printf da matriz toda
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}