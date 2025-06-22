#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste luis

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Desafio SuperTrunfo! \n");

    // Carta 1
    char estado1[3], codigo1[4], cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %2s", estado1);
    printf("Digite o codigo da cidade (1-4): \n");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", cidade1);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite a area (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em trilhoes): \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Exibição dos dados
    printf("\n=== Dados das Cartas Cadastradas ===\n");
    
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f trilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Carta 2
    char estado2[3], codigo2[4], cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %2s", estado2);
    printf("Digite o codigo da cidade (1-4): \n");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", cidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em trilhoes): \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados
    printf("\n=== Dados das Cartas Cadastradas ===\n");
    
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f trilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
