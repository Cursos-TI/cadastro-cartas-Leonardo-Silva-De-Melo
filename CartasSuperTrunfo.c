/******************************************************************************
*
* Desafio: Nível Aventureiro - Batalha de Cartas no Super Trunfo
* Autor: Leonardo Silva de Melo
* Data: 27/09/2025
*
*
*******************************************************************************/

// Inclui a biblioteca padrão de entrada e saída (Standard Input/Output).
// Esta biblioteca é essencial para usarmos funções como printf() para exibir
// informações na tela e scanf() para ler dados do teclado do usuário.

#include <stdio.h>

// Estrutura para representar uma carta do jogo Super Trunfo (Países)
// Agrupa todas as informações de uma carta em uma única variável.
struct Carta {
    char nomePais[50];
    int populacao;
    float area; // em km²
    float pib; // em trilhões de reais 
    int pontosTuristicos;
    float densidade; // Campo para o valor calculado
};

// A função 'main' é o ponto de entrada do programa.
int main() {
    // === PASSO 1: Definir os dados de duas cartas pré-cadastradas ===
    // Os dados são aproximados para fins de demonstração.

    struct Carta carta1 = {
        "Brasil",
        215300000,
        8510000.0f,
        1.608f,
        150
    };

    struct Carta carta2 = {
        "Argentina",
        45810000,
        2780000.0f,
        0.487f,
        120
    };

    // === PASSO 2: Calcular o atributo 'Densidade Demográfica' para cada carta ===
    // Este cálculo é feito uma vez no início do programa.
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;


    // Variável para armazenar a escolha do usuário no menu
    int opcao;

    // Loop 'do-while' para manter o menu ativo até que o usuário escolha sair (opção 0)
    do {
        // === PASSO 3: Exibir o menu interativo ===
        printf("\n\n=============== SUPER TRUNFO ===============\n");
        printf("Cartas na mesa: %s vs. %s\n", carta1.nomePais, carta2.nomePais);
        printf("Escolha um atributo para comparar:\n");
        printf("--------------------------------------------\n");
        printf("1. População\n");
        printf("2. Área (km²)\n");
        printf("3. PIB (em trilhões de reais)\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica (menor valor vence)\n");
        printf("0. Sair do Jogo\n");
        printf("--------------------------------------------\n");
        printf("Digite sua opção: ");

        // Ler a opção do usuário
        scanf("%d", &opcao);

        // === PASSO 4: Usar 'switch' para tratar a escolha do jogador ===
        switch (opcao) {
            case 1:
                // Lógica de comparação para População (maior vence)
                printf("\n--- Comparando: População ---\n");
                printf("%s: %d habitantes\n", carta1.nomePais, carta1.populacao);
                printf("%s: %d habitantes\n", carta2.nomePais, carta2.populacao);

                if (carta1.populacao > carta2.populacao) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else if (carta2.populacao > carta1.populacao) {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break; // 'break' finaliza o case

            case 2:
                // Lógica de comparação para Área (maior vence)
                printf("\n--- Comparando: Área ---\n");
                printf("%s: %.2f km²\n", carta1.nomePais, carta1.area);
                printf("%s: %.2f km²\n", carta2.nomePais, carta2.area);

                if (carta1.area > carta2.area) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else if (carta2.area > carta1.area) {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 3:
                // Lógica de comparação para PIB (maior vence)
                printf("\n--- Comparando: PIB ---\n");
                printf("%s: %.3f trilhões de reais\n", carta1.nomePais, carta1.pib);
                printf("%s: %.3f trilhões de reais\n", carta2.nomePais, carta2.pib);

                if (carta1.pib > carta2.pib) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else if (carta2.pib > carta1.pib) {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 4:
                 // Lógica de comparação para Pontos Turísticos (maior vence)
                printf("\n--- Comparando: Pontos Turísticos ---\n");
                printf("%s: %d pontos\n", carta1.nomePais, carta1.pontosTuristicos);
                printf("%s: %d pontos\n", carta2.nomePais, carta2.pontosTuristicos);

                if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 5:
                // Lógica de comparação para Densidade Demográfica (MENOR vence)
                printf("\n--- Comparando: Densidade Demográfica ---\n");
                printf("%s: %.2f hab/km²\n", carta1.nomePais, carta1.densidade);
                printf("%s: %.2f hab/km²\n", carta2.nomePais, carta2.densidade);

                if (carta1.densidade < carta2.densidade) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else if (carta2.densidade < carta1.densidade) {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 0:
                // Caso para sair do programa
                printf("\nObrigado por jogar! Saindo...\n");
                break;

            default:
                // Caso para qualquer outra opção inválida
                printf("\nOpção inválida! Por favor, escolha um número do menu.\n");
                break;
        }

    } while (opcao != 0); // O loop continua enquanto a opção for diferente de 0

    return 0; // Fim do programa
}

