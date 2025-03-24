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

    int opcao;
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Escolha um atributo para comparar as cartas:\n");

    // Menu de opções
    do {
        printf("\n1. Nome do país\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade demográfica\n");
        printf("7. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nAtributo: Nome do País\n");
                printf("Carta 1: %s\n", cartas[0].nomePais);
                printf("Carta 2: %s\n", cartas[1].nomePais);
                printf("Resultado: Empate! (Não há comparação direta entre os nomes)\n");
                break;

            case 2:
                printf("\nAtributo: População\n");
                printf("Carta 1: %s (População: %lu)\n", cartas[0].nomePais, cartas[0].populacao);
                printf("Carta 2: %s (População: %lu)\n", cartas[1].nomePais, cartas[1].populacao);

                if (cartas[0].populacao > cartas[1].populacao)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cartas[0].nomePais);
                else if (cartas[1].populacao > cartas[0].populacao)
                    printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 3:
                printf("\nAtributo: Área\n");
                printf("Carta 1: %s (Área: %.2f km²)\n", cartas[0].nomePais, cartas[0].area);
                printf("Carta 2: %s (Área: %.2f km²)\n", cartas[1].nomePais, cartas[1].area);

                if (cartas[0].area > cartas[1].area)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cartas[0].nomePais);
                else if (cartas[1].area > cartas[0].area)
                    printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 4:
                printf("\nAtributo: PIB\n");
                printf("Carta 1: %s (PIB: %.2f bilhões de USD)\n", cartas[0].nomePais, cartas[0].pib);
                printf("Carta 2: %s (PIB: %.2f bilhões de USD)\n", cartas[1].nomePais, cartas[1].pib);

                if (cartas[0].pib > cartas[1].pib)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cartas[0].nomePais);
                else if (cartas[1].pib > cartas[0].pib)
                    printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 5:
                printf("\nAtributo: Número de pontos turísticos\n");
                printf("Carta 1: %s (Pontos Turísticos: %d)\n", cartas[0].nomePais, cartas[0].pontosTuristicos);
                printf("Carta 2: %s (Pontos Turísticos: %d)\n", cartas[1].nomePais, cartas[1].pontosTuristicos);

                if (cartas[0].pontosTuristicos > cartas[1].pontosTuristicos)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cartas[0].nomePais);
                else if (cartas[1].pontosTuristicos > cartas[0].pontosTuristicos)
                    printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 6:
                printf("\nAtributo: Densidade Demográfica\n");
                printf("Carta 1: %s (Densidade: %.2f habitantes/km²)\n", cartas[0].nomePais, cartas[0].densidadePopulacional);
                printf("Carta 2: %s (Densidade: %.2f habitantes/km²)\n", cartas[1].nomePais, cartas[1].densidadePopulacional);

                // Regras para Densidade Demográfica: menor vence
                if (cartas[0].densidadePopulacional < cartas[1].densidadePopulacional)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cartas[0].nomePais);
                else if (cartas[1].densidadePopulacional < cartas[0].densidadePopulacional)
                    printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 7:
                printf("Saindo do jogo... Até logo!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 7);

    return 0;
}
