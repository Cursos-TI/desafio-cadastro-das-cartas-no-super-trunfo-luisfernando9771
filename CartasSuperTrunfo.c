#include <stdio.h>

int main() {
    printf("Desafio SuperTrunfo! \n");

    // Carta 1
    char estado1[3], codigo1[4], cidade1[20];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1, densidade1, pibCapital1;
    
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %2s", estado1);
    printf("Digite o codigo da cidade (1-4): \n");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", cidade1);
    printf("Digite a populacao: \n");
    scanf("%lu", &populacao1);
    printf("Digite a area (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em trilhões): \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1/area1;
    pibCapital1 = pib1/populacao1;

    // Carta 2
    char estado2[3], codigo2[4], cidade2[20];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2, densidade2, pibCapital2;
    
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %2s", estado2);
    printf("Digite o codigo da cidade (1-4): \n");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", cidade2);
    printf("Digite a populacao: \n");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em trilhões): \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2/area2;
    pibCapital2 = pib2/populacao2;

    // Exibição dos dados
    printf("\n=== Dados das Cartas Cadastradas ===\n");
    
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f trilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade demografica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibCapital1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f trilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade demografica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibCapital2);

    // Comparação das cartas
    printf("\n=== Comparação das Cartas ===\n");
    
    // Comparação atributo a atributo
    printf("\nResultados das comparações (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
    
    // População (maior vence)
    int resultado_populacao = (populacao1 > populacao2) ? 1 : 0;
    printf("Populacao: %d\n", resultado_populacao);
    
    // Área (maior vence)
    int resultado_area = (area1 > area2) ? 1 : 0;
    printf("Area: %d\n", resultado_area);
    
    // PIB (maior vence)
    int resultado_pib = (pib1 > pib2) ? 1 : 0;
    printf("PIB: %d\n", resultado_pib);
    
    // Pontos Turísticos (maior vence)
    int resultado_pontos = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    printf("Pontos Turisticos: %d\n", resultado_pontos);
    
    // Densidade (menor vence)
    int resultado_densidade = (densidade1 < densidade2) ? 1 : 0;
    printf("Densidade: %d\n", resultado_densidade);
    
    // PIB per capita (maior vence)
    int resultado_pibcapita = (pibCapital1 > pibCapital2) ? 1 : 0;
    printf("PIB per capita: %d\n", resultado_pibcapita);

    // Cálculo do Super Poder
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibCapital1 + (1/densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibCapital2 + (1/densidade2);
    
    int resultado_super_poder = (super_poder1 > super_poder2) ? 1 : 0;
    printf("\nSuper Poder:\n");
    printf("Carta 1: %.2f\n", super_poder1);
    printf("Carta 2: %.2f\n", super_poder2);
    printf("Resultado: %d\n", resultado_super_poder);

    return 0;
}