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
    int populacao1;         // Variável inteira para o número de habitantes.
    float area1;            // Variável de ponto flutuante (com casas decimais) para a área.
    float pib1;             // Variável de ponto flutuante para o PIB.
    int pontosTuristicos1;  // Variável inteira para a quantidade de pontos turísticos.

    // --- DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 2 ---
    // Similar à seção anterior, mas para os dados da segunda carta.
    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


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

    printf("\n"); // Imprime uma linha em branco para melhor organização visual.


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


    // --- SEÇÃO DE SAÍDA DE DADOS: EXIBIÇÃO DAS CARTAS CADASTRADAS ---
    // Após coletar todas as informações, esta seção as exibe na tela
    // de forma organizada e legível para o usuário.
    printf("\n\n--- Cartas Cadastradas ---\n");

    // Exibindo todas as informações armazenadas para a Carta 1.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    // %.2f formata o número float para exibir apenas duas casas decimais.
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibindo todas as informações armazenadas para a Carta 2.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // A função main retorna 0 para indicar ao sistema operacional que o
    // programa foi executado com sucesso e terminou sem erros.
    return 0;
}
