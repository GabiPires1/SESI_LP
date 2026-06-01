#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

char tabuleiro[3][3];
char jogador;
int jogoAtivo;

char nomeJogador1[50];
char nomeJogador2[50];

int contraMaquina;
int pontosJogador1 = 0;
int pontosJogador2 = 0;

void iniciarTabuleiro() {
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

void mostrarTabuleiro() {
    int i;
    printf("\n    0   1   2\n");
    printf("  -------------\n");
    for(i = 0; i < 3; i++) {
        printf("%d | %c | %c | %c |\n", i,
               tabuleiro[i][0],
               tabuleiro[i][1],
               tabuleiro[i][2]);
        printf("  -------------\n");
    }
    printf("\n");
}

void mostrarPlacar() {
    printf("\n===== PLACAR =====\n");
    printf("%s: %d ponto(s)\n", nomeJogador1, pontosJogador1);
    printf("%s: %d ponto(s)\n", nomeJogador2, pontosJogador2);
    printf("==================\n\n");
}

void trocarJogador() {
    jogador = (jogador == 'X') ? 'O' : 'X';
}

int verificarVitoria() {
    int i;

    for(i = 0; i < 3; i++) {
        if(tabuleiro[i][0] == jogador &&
           tabuleiro[i][1] == jogador &&
           tabuleiro[i][2] == jogador) return 1;

        if(tabuleiro[0][i] == jogador &&
           tabuleiro[1][i] == jogador &&
           tabuleiro[2][i] == jogador) return 1;
    }

    if(tabuleiro[0][0] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][2] == jogador) return 1;

    if(tabuleiro[0][2] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][0] == jogador) return 1;

    return 0;
}

int verificarEmpate() {
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            if(tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}

void jogadaMaquina() {
    int linha, coluna;

    printf("\nMaquina esta pensando...\n");
    sleep(2);

    do {
        linha = rand() % 3;
        coluna = rand() % 3;
    } while(tabuleiro[linha][coluna] != ' ');

    printf("\nMaquina jogou em (%d,%d)\n", linha, coluna);

    tabuleiro[linha][coluna] = jogador;

    if(verificarVitoria()) {
        pontosJogador2++;
        mostrarTabuleiro();
        printf("%s venceu!\n", nomeJogador2);
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

void fazerJogada() {
    int linha, coluna;

    printf("%s (%c)\n",
           (jogador == 'X') ? nomeJogador1 : nomeJogador2,
           jogador);

    printf("Digite a linha (0-2): ");
    scanf("%d", &linha);

    printf("Digite a coluna (0-2): ");
    scanf("%d", &coluna);

    if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
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

        if(jogador == 'X') {
            pontosJogador1++;
            printf("%s venceu!\n", nomeJogador1);
        } else {
            pontosJogador2++;
            printf("%s venceu!\n", nomeJogador2);
        }

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

void mostrarRegras() {
    printf("\n===== MANUAL DO JOGO DA VELHA =====\n\n");
    printf("Faca 3 simbolos seguidos em linha, coluna ou diagonal.\n\n");
}

void mostrarMenu() {
    printf("==============================\n");
    printf("       JOGO DA VELHA\n");
    printf("==============================\n");
    printf("1 - Jogar\n");
    printf("2 - Manual\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    char resposta;

    srand(time(NULL));

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if(opcao == 1) {

            printf("\n1 - Jogador vs Jogador\n");
            printf("2 - Jogador vs Maquina\n");
            printf("Escolha: ");
            scanf("%d", &contraMaquina);

            printf("Digite o nome do Jogador X: ");
            scanf("%49s", nomeJogador1);

            if(contraMaquina == 2)
                strcpy(nomeJogador2, "Maquina");
            else {
                printf("Digite o nome do Jogador O: ");
                scanf("%49s", nomeJogador2);
            }

            do {
                iniciarTabuleiro();
                jogador = 'X';
                jogoAtivo = 1;

                while(jogoAtivo) {
                    mostrarTabuleiro();

                    if(contraMaquina == 2 && jogador == 'O')
                        jogadaMaquina();
                    else
                        fazerJogada();
                }

                mostrarPlacar();

                printf("Deseja jogar novamente? (S/N): ");
                scanf(" %c", &resposta);

            } while(resposta == 'S' || resposta == 's');

        } else if(opcao == 2) {
            mostrarRegras();
        } else if(opcao == 3) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida!\n");
        }

    } while(opcao != 3);

    return 0;
}
