/******************************************************************************
*
* Desafio: Nível Aventureiro - Batalha de Cartas no Super Trunfo
* Autor: Leonardo Silva de Melo
* Data: 21/09/2025
*
*
*******************************************************************************/

// Inclui a biblioteca padrão de entrada e saída (Standard Input/Output).
// Esta biblioteca é essencial para usarmos funções como printf() para exibir
// informações na tela e scanf() para ler dados do teclado do usuário.

#include <stdio.h>


struct Carta {
    char estado[3];
    char codigoCarta[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};


int main() {
    // === PASSO 1: Declarar e inicializar as cartas DIRETAMENTE ===
    // Usamos as chaves {} para fornecer os valores na ordem em que foram declarados na struct.
    // Isso é mais limpo e eficiente.
    struct Carta carta1 = {
        "SP",
        "A1",
        "Sao Paulo",
        12396372,
        1521.11f,
        789.4f,
        25
    };

    struct Carta carta2 = {
        "RJ",
        "A2",
        "Rio de Janeiro",
        6775561,
        1200.329f,
        358.2f,
        30
    };

    // === PASSO 2: Calcular e exibir Densidade Populacional e PIB per capita ===
    
    // Cálculos para a Carta 1
    float densidadePop1 = carta1.populacao / carta1.area;
    float pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao;

    // Cálculos para a Carta 2
    float densidadePop2 = carta2.populacao / carta2.area;
    float pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // A exibição dos dados continua exatamente igual
    printf("--- DADOS DAS CARTAS ---\n\n");
    printf("CARTA 1:\n");
    printf("Cidade: %s (%s)\n", carta1.nomeCidade, carta1.estado);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area (km2): %.2f\n", carta1.area);
    printf("PIB (bilhoes R$): %.2f\n", carta1.pib);
    printf("-> Densidade Populacional: %.2f hab/km2\n", densidadePop1);
    printf("-> PIB per capita: R$ %.2f\n", pibPerCapita1);
    
    printf("\nCARTA 2:\n");
    printf("Cidade: %s (%s)\n", carta2.nomeCidade, carta2.estado);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area (km2): %.2f\n", carta2.area);
    printf("PIB (bilhoes R$): %.2f\n", carta2.pib);
    printf("-> Densidade Populacional: %.2f hab/km2\n", densidadePop2);
    printf("-> PIB per capita: R$ %.2f\n", pibPerCapita2);


    // === PASSO 3 e 4: Comparação (continua igual) ===
    
    printf("\n\n--- COMPARACAO DE CARTAS ---\n");
    printf("Atributo Escolhido: PIB (em bilhoes de R$)\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
    printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pib);

    if (carta1.pib > carta2.pib) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } 
    else if (carta2.pib > carta1.pib) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } 
    else {
        printf("\nResultado: Empate!\n");
    }
    
    return 0;
}

