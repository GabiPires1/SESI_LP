#include <stdio.h>

char tabuleiro[3][3];
char jogador;
int jogoAtivo;

// Inicializa o tabuleiro
void iniciarTabuleiro() {

    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

// Mostra o tabuleiro
void mostrarTabuleiro() {

    int i;

    printf("\n");

    for(i = 0; i < 3; i++) {

        printf(" %c | %c | %c \n",
               tabuleiro[i][0],
               tabuleiro[i][1],
               tabuleiro[i][2]);

        if(i < 2) {
            printf("---|---|---\n");
        }
    }

    printf("\n");
}

// Troca o jogador
void trocarJogador() {

    if(jogador == 'X') {
        jogador = 'O';
    } else {
        jogador = 'X';
    }
}

// Verifica vitória
int verificarVitoria() {

    int i;

    // Linhas
    for(i = 0; i < 3; i++) {

        if(tabuleiro[i][0] == jogador &&
           tabuleiro[i][1] == jogador &&
           tabuleiro[i][2] == jogador) {

            return 1;
        }
    }

    // Colunas
    for(i = 0; i < 3; i++) {

        if(tabuleiro[0][i] == jogador &&
           tabuleiro[1][i] == jogador &&
           tabuleiro[2][i] == jogador) {

            return 1;
        }
    }

    // Diagonais
    if(tabuleiro[0][0] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][2] == jogador) {

        return 1;
    }

    if(tabuleiro[0][2] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][0] == jogador) {

        return 1;
    }

    return 0;
}

// Verifica empate
int verificarEmpate() {

    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {

            if(tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }

    return 1;
}

// Faz a jogada
void fazerJogada() {

    int linha, coluna;

    printf("Jogador %c\n", jogador);

    printf("Digite a linha (0-2): ");
    scanf("%d", &linha);

    printf("Digite a coluna (0-2): ");
    scanf("%d", &coluna);

    // Verifica posição válida
    if(linha < 0 || linha > 2 ||
       coluna < 0 || coluna > 2) {

        printf("Posicao invalida!\n");
        return;
    }

    // Verifica se já está ocupada
    if(tabuleiro[linha][coluna] != ' ') {

        printf("Posicao ocupada!\n");
        return;
    }

    // Marca jogada
    tabuleiro[linha][coluna] = jogador;

    // Verifica vitória
    if(verificarVitoria()) {

        mostrarTabuleiro();
        printf("Jogador %c venceu!\n", jogador);

        jogoAtivo = 0;
        return;
    }

    // Verifica empate
    if(verificarEmpate()) {

        mostrarTabuleiro();
        printf("O jogo empatou!\n");

        jogoAtivo = 0;
        return;
    }

    trocarJogador();
}

// Menu
void mostrarMenu() {

    printf("==============================\n");
    printf("       JOGO DA VELHA\n");
    printf("==============================\n");
    printf("1 - Jogar\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
}

// Regras
void mostrarRegras() {

    printf("\nREGRAS:\n");
    printf("- Dois jogadores participam\n");
    printf("- O jogador X inicia\n");
    printf("- Ganha quem completar linha, coluna ou diagonal\n");
    printf("- Caso o tabuleiro encha, ocorre empate\n\n");
}

int main() {

    int opcao;

    do {

        mostrarMenu();
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:

                iniciarTabuleiro();

                jogador = 'X';
                jogoAtivo = 1;

                while(jogoAtivo) {

                    mostrarTabuleiro();
                    fazerJogada();
                }

                break;

            case 2:

                mostrarRegras();
                break;

            case 3:

                printf("Encerrando o jogo...\n");
                break;

            default:

                printf("Opcao invalida!\n");
        }

    } while(opcao != 3);

    return 0;
}