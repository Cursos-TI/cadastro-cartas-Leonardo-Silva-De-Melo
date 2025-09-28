# Super Trunfo: Desafio Nível Mestre

Esta é a versão final e mais completa do jogo Super Trunfo implementado em C. O projeto culmina os aprendizados de estruturas de decisão, manipulação de dados com `structs` e interação com o usuário.

## Funcionalidades Avançadas

-   **Seleção de Múltiplos Atributos**: O jogador escolhe dois atributos distintos para basear a comparação da rodada.
-   **Menus Dinâmicos**: Após o jogador selecionar o primeiro atributo, o menu para a segunda escolha é atualizado dinamicamente para não exibir a opção já selecionada.
-   **Lógica de Soma Ponderada**: A vitória é decidida pela soma dos valores dos dois atributos escolhidos. A Densidade Demográfica (onde um valor menor é melhor) é matematicamente invertida para contribuir de forma justa para a soma final, mantendo a regra de que a "maior soma vence".
-   **Código Estruturado**: O código utiliza funções auxiliares para melhorar a legibilidade, organização e manutenibilidade, uma prática comum em projetos mais complexos.
-   **Uso de Operador Ternário**: A determinação do vencedor é feita de forma concisa e elegante utilizando o operador ternário do C.

## Como Compilar e Executar

O projeto requer um compilador C (como o GCC).

1.  **Clone o repositório:**
    ```bash
    git clone [URL_DO_SEU_REPOSITORIO_AQUI]
    ```

2.  **Navegue até a pasta do projeto:**
    ```bash
    cd [NOME_DA_PASTA_DO_PROJETO]
    ```

3.  **Compile o programa:**
    ```bash
    gcc super_trunfo_mestre.c -o super_trunfo_mestre
    ```

4.  **Execute o jogo:**
    ```bash
    ./super_trunfo_mestre
    ```

## Exemplo de Uso

1.  O programa primeiro pedirá para você escolher o primeiro atributo de uma lista.
2.  Em seguida, um novo menu aparecerá, **sem** o atributo que você acabou de escolher.
3.  Após selecionar o segundo atributo, o programa exibirá um resumo completo da rodada, incluindo os valores de cada atributo, a soma ponderada para cada carta e o grande vencedor.
