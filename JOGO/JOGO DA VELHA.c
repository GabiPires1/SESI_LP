#include <stdio.h>

char tabuleiro[3][3];
char jogador;
int jogoAtivo;

// Inicializa tabuleiro
void iniciarTabuleiro() {

    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

// Mostra tabuleiro com linha e coluna
void mostrarTabuleiro() {

    int i;

    printf("\n");
    printf("    0   1   2\n");
    printf("  -------------\n");

    for(i = 0; i < 3; i++) {

        printf("%d | %c | %c | %c |\n",
               i,
               tabuleiro[i][0],
               tabuleiro[i][1],
               tabuleiro[i][2]);

        printf("  -------------\n");
    }

    printf("\n");
}

// Troca jogador
void trocarJogador() {

    if(jogador == 'X') {
        jogador = 'O';
    }
    else {
        jogador = 'X';
    }
}

// Verifica vitória
int verificarVitoria() {

    int i;

    for(i = 0; i < 3; i++) {

        if(tabuleiro[i][0] == jogador &&
           tabuleiro[i][1] == jogador &&
           tabuleiro[i][2] == jogador) {
            return 1;
        }

        if(tabuleiro[0][i] == jogador &&
           tabuleiro[1][i] == jogador &&
           tabuleiro[2][i] == jogador) {
            return 1;
        }
    }

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

// Faz jogada
void fazerJogada() {

    int linha, coluna;

    printf("Jogador %c\n", jogador);

    printf("Digite a linha (0-2): ");
    scanf("%d", &linha);

    printf("Digite a coluna (0-2): ");
    scanf("%d", &coluna);

    if(linha < 0 || linha > 2 ||
       coluna < 0 || coluna > 2) {

        printf("Posicao invalida!\n");
        return;
    }

    if(tabuleiro[linha][coluna] != ' ') {

        printf("Posicao ocupada!\n");
        return;
    }

    tabuleiro[linha][coluna] = jogador;

    if(verificarVitoria()) {

        mostrarTabuleiro();
        printf("Jogador %c venceu!\n", jogador);

        jogoAtivo = 0;
        return;
    }

    if(verificarEmpate()) {

        mostrarTabuleiro();
        printf("O jogo empatou!\n");

        jogoAtivo = 0;
        return;
    }

    trocarJogador();
}

// MENU (MANUAL DO JOGO)
void mostrarRegras() {

    printf("\n===== MANUAL DO JOGO DA VELHA =====\n\n");

    printf("OBJETIVO:\n");
    printf("Fazer 3 simbolos seguidos (X ou O)\n");
    printf("na linha, coluna ou diagonal.\n\n");

    printf("COMO FUNCIONA:\n");
    printf("- O jogador X sempre começa.\n");
    printf("- Os jogadores jogam alternadamente.\n");
    printf("- Não pode jogar em posição ocupada.\n\n");

    printf("LINHAS:\n");
    printf("0 = cima\n");
    printf("1 = meio\n");
    printf("2 = baixo\n\n");

    printf("COLUNAS:\n");
    printf("0 = esquerda\n");
    printf("1 = meio\n");
    printf("2 = direita\n\n");

    printf("TABULEIRO:\n\n");

    printf("    0   1   2\n");
    printf("  -------------\n");
    printf("0 |   |   |   |\n");
    printf("  -------------\n");
    printf("1 |   |   |   |\n");
    printf("  -------------\n");
    printf("2 |   |   |   |\n");
    printf("  -------------\n\n");

    printf("EXEMPLO:\n");
    printf("- (0,0) canto superior esquerdo\n");
    printf("- (1,1) centro\n");
    printf("- (2,2) canto inferior direito\n\n");

    printf("VENCE QUEM:\n");
    printf("- completar uma linha\n");
    printf("- ou coluna\n");
    printf("- ou diagonal\n\n");

    printf("===================================\n\n");
}

// Menu
void mostrarMenu() {

    printf("==============================\n");
    printf("       JOGO DA VELHA\n");
    printf("==============================\n");
    printf("1 - Jogar\n");
    printf("2 - Manual\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
}

// main
int main() {

    int opcao;

    do {

        mostrarMenu();
        scanf("%d", &opcao);

        if(opcao == 1) {

            iniciarTabuleiro();
            jogador = 'X';
            jogoAtivo = 1;

            while(jogoAtivo == 1) {

                mostrarTabuleiro();
                fazerJogada();
            }
        }

        else if(opcao == 2) {
            mostrarRegras();
        }

        else if(opcao == 3) {
            printf("Saindo...\n");
        }

        else {
            printf("Opcao invalida!\n");
        }

    } while(opcao != 3);

    return 0;
}