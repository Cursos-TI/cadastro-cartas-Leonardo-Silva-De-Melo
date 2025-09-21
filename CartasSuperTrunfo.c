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

// A função main() é o ponto de entrada de todo programa em C.
// A execução do código começa aqui.
int main() {
    
    // --- DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 1 ---
    // Nesta seção, declaramos todas as variáveis que armazenarão as
    // informações da primeira carta do jogo.

    char estado1;           // Armazena uma única letra para o estado (ex: 'A').
    char codigo1[4];        // Array de caracteres (string) para o código (ex: "A01").
                            // O tamanho é 4 para comportar 3 caracteres + o terminador nulo '\0'.
    char cidade1[50];       // String para o nome da cidade, com espaço para até 49 caracteres.
    unsigned long int populacao1;          // ALTERADO para unsigned long int.
    double area1;            // Variável de ponto flutuante (com casas decimais) para a área.
    double pib1;             // Variável de ponto flutuante para o PIB.
    int pontosTuristicos1;  // Variável inteira para a quantidade de pontos turísticos.
    double densidadePop1;    
    double pibPerCapita1;    
    double superPoder1;     // NOVO: Variável para o Super Poder

    // --- DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 2 ---
    // Similar à seção anterior, mas para os dados da segunda carta.
    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; // ALTERADO para unsigned long int
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidadePop2;    
    double pibPerCapita2;    
    double superPoder2;   // NOVO: Variável para o Super Poder

    // --- SEÇÃO DE ENTRADA DE DADOS: CADASTRO DA CARTA 1 ---
    // Aqui, o programa interage com o usuário para coletar os dados da primeira carta.
    printf("--- Cadastro da Carta 1 ---\n");

    // Pede e lê a letra do estado. O espaço antes de " %c" serve para consumir
    // qualquer caractere de nova linha ou espaço em branco deixado no buffer.
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    // Pede e lê o código da carta como uma string.
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    // Pede e lê o nome da cidade.
    // Usamos " %[^\n]" para ler uma linha inteira, incluindo espaços.
    // O espaço inicial limpa o buffer e [^\n] lê tudo até o usuário pressionar Enter.
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    // Pede e lê a população da cidade (um número inteiro).
    printf("Digite a População: ");
    scanf("%d", &populacao1);

    // Pede e lê a área da cidade (um número com casas decimais).
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    // Pede e lê o PIB da cidade.
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    // Pede e lê o número de pontos turísticos.
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- SEÇÃO DE ENTRADA DE DADOS: CADASTRO DA CARTA 2 ---
    // O processo aqui é idêntico ao da Carta 1, mas para as variáveis da Carta 2.
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
 

   // --- SEÇÃO DE CÁLCULOS ---
    
    // Cálculos para a Carta 1
    densidadePop1 = (double)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (double)populacao1 + area1 + (pib1 * 1000000000) + (double)pontosTuristicos1 + pibPerCapita1 + (1 / densidadePop1);

    // Cálculos para a Carta 2
    densidadePop2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (double)populacao2 + area2 + (pib2 * 1000000000) + (double)pontosTuristicos2 + pibPerCapita2 + (1 / densidadePop2);


    // --- SEÇÃO DE SAÍDA DE DADOS: EXIBIÇÃO DAS CARTAS CADASTRADAS ---
    // Após coletar todas as informações, esta seção as exibe na tela
    // de forma organizada e legível para o usuário.
 
    
     // --- NOVA SEÇÃO: COMPARAÇÃO DAS CARTAS ---
    printf("\nComparação de Cartas:\n");
    
    // Para todos, exceto densidade, maior ganha.
    // A expressão (var1 > var2) resulta em 1 (true) ou 0 (false).
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2));
    
    // Para densidade, menor ganha.
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePop1 < densidadePop2 ? 1 : 2), (densidadePop1 < densidadePop2));
    
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2));


    // A função main retorna 0 para indicar ao sistema operacional que o
    // programa foi executado com sucesso e terminou sem erros.



    
    return 0;
}
