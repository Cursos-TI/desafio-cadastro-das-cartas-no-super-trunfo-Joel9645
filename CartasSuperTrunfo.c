#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
   // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declaração das variáveis para a primeira carta
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char cc1[4];
    char Cid1[20];

    // Declaração das variáveis para a segunda carta
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    char codigodacidade2[4];
    char Cidade2[30];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Entrada de dados da primeira carta
    printf("\nCadastro da Carta 1:\n");
    printf("Digite o nome da Cidade:\n");
    scanf("%s", Cid1);
    printf("Digite o Código da cidade");
    scanf("%s", cc1);
    printf("População em Milhões: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o nome da Cidade:\n");
    scanf("%s", Cidade2);
    printf("Digite o Código da cidade");
    scanf("%s", codigodacidade2);
    printf("População em Milhões: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Carta 1 ---\n");
printf("O nome da cidade da carta 1 é: %s\n", Cid1);
printf("O código da cidade da carta 1 é: %s\n", cc1);
printf("A População da carta 1 é: %d Milhões\n", populacao1);
printf("A Área da carta 1 é de: %.2f km²\n", area1);
printf("O PIB da carta 1 é de: %.2f bilhões\n", pib1);
printf("A quantidade de Pontos turísticos da carta 1 é de: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Carta 2 ---\n");
    printf("O nome da cidade da carta 2 é: %s\n", Cidade2);
    printf("O código da cidade da carta 2 é: %s\n",codigodacidade2);
    printf("A População da carta 2 é: %d Milhões\n", populacao2);
    printf("A Área da carta 2 é de: %.2f km²\n", area2);
    printf("O PIB da carta 2 é de: %.2f bilhões\n", pib2);
    printf("A quantidade de Pontos turísticos da carta 2 é de: %d\n", pontosTuristicos2);



    return 0;
}
