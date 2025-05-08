#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países - nível básico (Adaptado para nível básico - Comparação de Cartas)
// Tema 3 - Calculando Densidade Populacional e PIB per Capita (Foco na Comparação)
// Desenvolvimento do jogo Batalha de Cartas no Super Trunfo.
// Nível Básico: Comparação de duas cartas pré-definidas no código.
// Escolha do atributo de comparação diretamente no código.
// Uso de estruturas de decisão if e if-else para determinar o vencedor.
// Ângelo Oliveira dos Santos - Faculdade Estacio - Curso Análise e desenvolvimento de Sistemas

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[3] = "SP";
    char codigoCarta1[5] = "SP01";
    char nomeCidade1[50] = "Sao Paulo";
    unsigned long int populacao1 = 12325000;//
    float area1 = 1521.11;
    float pib1 = 699.28;
    int numeroPontoturisticos1 = 50;
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Declaração das variáveis para a Carta 2
    char estado2[3] = "RJ";
    char codigoCarta2[5] = "RJ02";
    char nomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6718903;
    float area2 = 1200.33;
    float pib2 = 365.30;
    int numeroPontoturisticos2 = 30;
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // *** ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO (DEFINIDO DIRETAMENTE NO CÓDIGO) ***
    char atributoComparacao[] = "População"; // Pode mudar para "Área", "PIB", etc.

    printf("Comparação de cartas (Atributo: %s):\n", atributoComparacao);

    // *** LÓGICA DE COMPARAÇÃO E DETERMINAÇÃO DA CARTA VENCEDORA ***
    // A função strcmp é usada para comparar duas strings.
    // Ela retorna 0 se as strings são iguais, um valor negativo se a primeira string é menor que a segunda,
    // e um valor positivo se a primeira string é maior que a segunda.
    if (strcmp(atributoComparacao, "População") == 0) {
        printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "Área") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "PIB") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "Densidade Populacional") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, densidade2);
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "PIB per Capita") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        printf("Atributo de comparação inválido!\n");
    }

    return 0;
}
