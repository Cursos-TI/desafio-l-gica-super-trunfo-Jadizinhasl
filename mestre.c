#include <stdio.h>
#include <string.h>

typedef struct {
    char nomePais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
} Carta;

int main() {
    // Definindo duas cartas de países para comparação
    Carta cartas[2] = {
        {"Brasil", 211049527, 8515767.0, 2055.0, 100, 24.8},  // Exemplo: Brasil
        {"Argentina", 44494502, 2780400.0, 500.0, 50, 15.9}    // Exemplo: Argentina
    };

    int opcao1, opcao2;
    int atributosDisponiveis[6] = {1, 2, 3, 4, 5, 6}; // Atributos disponíveis
    printf("Bem-vindo ao jogo Super Trunfo!\n");

    // Menu interativo para escolher o primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao1);

    // Remover o atributo escolhido do menu de opções para o segundo atributo
    atributosDisponiveis[opcao1 - 1] = 0;

    // Menu interativo para escolher o segundo atributo
    printf("\nEscolha o segundo atributo para comparar as cartas:\n");
    for (int i = 0; i < 6; i++) {
        if (atributosDisponiveis[i] != 0) {
            switch (atributosDisponiveis[i]) {
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Número de pontos turísticos\n"); break;
                case 5: printf("5. Densidade demográfica\n"); break;
            }
        }
    }

    printf("Digite a opção desejada: ");
    scanf("%d", &opcao2);

    // Função para comparar os dois atributos
    float somaCarta1 = 0, somaCarta2 = 0;
    float valor1, valor2;

    // Comparação para o primeiro atributo
    switch (opcao1) {
        case 1:
            valor1 = cartas[0].populacao;
            valor2 = cartas[1].populacao;
            break;
        case 2:
            valor1 = cartas[0].area;
            valor2 = cartas[1].area;
            break;
        case 3:
            valor1 = cartas[0].pib;
            valor2 = cartas[1].pib;
            break;
        case 4:
            valor1 = cartas[0].pontosTuristicos;
            valor2 = cartas[1].pontosTuristicos;
            break;
        case 5:
            valor1 = cartas[0].densidadePopulacional;
            valor2 = cartas[1].densidadePopulacional;
            break;
    }
    somaCarta1 += valor1;
    somaCarta2 += valor2;

    // Comparação para o segundo atributo
    switch (opcao2) {
        case 1:
            valor1 = cartas[0].populacao;
            valor2 = cartas[1].populacao;
            break;
        case 2:
            valor1 = cartas[0].area;
            valor2 = cartas[1].area;
            break;
        case 3:
            valor1 = cartas[0].pib;
            valor2 = cartas[1].pib;
            break;
        case 4:
            valor1 = cartas[0].pontosTuristicos;
            valor2 = cartas[1].pontosTuristicos;
            break;
        case 5:
            valor1 = cartas[0].densidadePopulacional;
            valor2 = cartas[1].densidadePopulacional;
            break;
    }
    somaCarta1 += valor1;
    somaCarta2 += valor2;

    // Exibição dos resultados
    printf("\nResultado da Comparação:\n");
    printf("Carta 1: %s\n", cartas[0].nomePais);
    printf("Carta 2: %s\n", cartas[1].nomePais);

    printf("Atributo 1: ");
    switch (opcao1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("Carta 1: %.2f\n", valor1);
    printf("Carta 2: %.2f\n", valor2);

    printf("Atributo 2: ");
    switch (opcao2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("Carta 1: %.2f\n", valor1);
    printf("Carta 2: %.2f\n", valor2);

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    if (somaCarta1 > somaCarta2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cartas[0].nomePais);
    else if (somaCarta2 > somaCarta1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomePais);
    else
        printf("Resultado: Empate!\n");

    return 0;
}
