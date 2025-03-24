#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

int main() {
    // Definindo o vetor de cartas
    Carta cartas[2];

    // Entrada de dados
    for (int i = 0; i < 2; i++) {
        printf("\nDigite os dados da Carta %d:\n", i + 1);
        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);
        printf("Código da carta (ex: A01): ");
        scanf(" %s", cartas[i].codigo);
        printf("Nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);
        printf("População: ");
        scanf(" %lu", &cartas[i].populacao);
        printf("Área (km²): ");
        scanf(" %f", &cartas[i].area);
        printf("PIB (em bilhões de reais): ");
        scanf(" %f", &cartas[i].pib);
        printf("Número de pontos turísticos: ");
        scanf(" %d", &cartas[i].pontosTuristicos);
        
        // Cálculos
        cartas[i].densidadePopulacional = cartas[i].populacao / cartas[i].area;
        cartas[i].pibPerCapita = (cartas[i].pib * 1000000000) / cartas[i].populacao;
        cartas[i].superPoder = cartas[i].populacao + cartas[i].area + (cartas[i].pib * 1000000000) + 
                               cartas[i].pontosTuristicos + cartas[i].pibPerCapita + (1 / cartas[i].densidadePopulacional);
    }

    // Comparação de atributos
    float valoresCarta1[] = {cartas[0].populacao, cartas[0].area, cartas[0].pib, cartas[0].pontosTuristicos, cartas[0].densidadePopulacional, cartas[0].pibPerCapita, cartas[0].superPoder};
    float valoresCarta2[] = {cartas[1].populacao, cartas[1].area, cartas[1].pib, cartas[1].pontosTuristicos, cartas[1].densidadePopulacional, cartas[1].pibPerCapita, cartas[1].superPoder};

    // Saída - Comparação de Densidade Populacional
    printf("\nComparação de Cartas: (Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (Densidade: %.2f)\n", cartas[0].nomeCidade, valoresCarta1[4]);
    printf("Carta 2 - %s (Densidade: %.2f)\n", cartas[1].nomeCidade, valoresCarta2[4]);

    if (valoresCarta1[4] < valoresCarta2[4]) { // Regra especial: menor densidade vence
        printf("Resultado: Carta 1 (%s) venceul!\n", cartas[0].nomeCidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomeCidade);
    }

    return 0;
}
