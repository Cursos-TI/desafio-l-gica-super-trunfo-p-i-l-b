#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definição das variáveis para as cartas
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    int escolha1, escolha2;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao jogo 'Super Trunfo' de cidades - Nivel Mestre!\n");

    // Cadastro da Carta 1
    printf("\nCadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();  // Limpa buffer
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    getchar(); // Limpa buffer

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição do menu para escolha de atributos
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    printf("Digite o numero do primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Digite o numero do segundo atributo: ");
    scanf("%d", &escolha2);

    // Função para comparar atributos e exibir resultado
    void comparar(char *nomeAtributo, float valor1, float valor2, int criterio) {
        printf("%s: ", nomeAtributo);
        if (valor1 == valor2) {
            printf("Empate!\n");
        } else {
            printf("Carta %d venceu (%d)\n", (criterio ? valor1 > valor2 : valor1 < valor2) ? 1 : 2, (criterio ? valor1 > valor2 : valor1 < valor2));
        }
    }

    // Comparação dos atributos escolhidos
    printf("\nResultados da Comparacao:\n");
    comparar(
        escolha1 == 1 ? "Populacao" :
        escolha1 == 2 ? "Area" :
        escolha1 == 3 ? "PIB" :
        escolha1 == 4 ? "Pontos Turisticos" :
        escolha1 == 5 ? "Densidade Populacional" :
        escolha1 == 6 ? "PIB per Capita" : "Super Poder",
        escolha1 == 1 ? populacao1 :
        escolha1 == 2 ? area1 :
        escolha1 == 3 ? pib1 :
        escolha1 == 4 ? pontosTuristicos1 :
        escolha1 == 5 ? densidade1 :
        escolha1 == 6 ? pibPerCapita1 : superPoder1,
        escolha1 == 1 ? populacao2 :
        escolha1 == 2 ? area2 :
        escolha1 == 3 ? pib2 :
        escolha1 == 4 ? pontosTuristicos2 :
        escolha1 == 5 ? densidade2 :
        escolha1 == 6 ? pibPerCapita2 : superPoder2,
        escolha1 == 5 ? 0 : 1
    );

    comparar(
        escolha2 == 1 ? "Populacao" :
        escolha2 == 2 ? "Area" :
        escolha2 == 3 ? "PIB" :
        escolha2 == 4 ? "Pontos Turisticos" :
        escolha2 == 5 ? "Densidade Populacional" :
        escolha2 == 6 ? "PIB per Capita" : "Super Poder",
        escolha2 == 1 ? populacao1 :
        escolha2 == 2 ? area1 :
        escolha2 == 3 ? pib1 :
        escolha2 == 4 ? pontosTuristicos1 :
        escolha2 == 5 ? densidade1 :
        escolha2 == 6 ? pibPerCapita1 : superPoder1,
        escolha2 == 1 ? populacao2 :
        escolha2 == 2 ? area2 :
        escolha2 == 3 ? pib2 :
        escolha2 == 4 ? pontosTuristicos2 :
        escolha2 == 5 ? densidade2 :
        escolha2 == 6 ? pibPerCapita2 : superPoder2,
        escolha2 == 5 ? 0 : 1
    );

    return 0;
}
