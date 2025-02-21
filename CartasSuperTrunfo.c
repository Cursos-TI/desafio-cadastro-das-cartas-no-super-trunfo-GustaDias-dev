#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //CARTA 1

    char estado;
    char codigo[20];
    char nome[20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float capita;
    float poder;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Cadastre sua carta...\n");
    printf("Insira o Estado: \n");
    scanf("%c", &estado);
    printf("Insira o código da carta: \n");
    scanf("%s", &codigo);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome);
    printf("Insira a população: \n");
    scanf("%u", &populacao);
    printf("Insira a Área em km²: \n");
    scanf("%f", &area);
    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontos);

    
    //CARTA 2
    char estado2;
    char codigo2[20];
    char nome2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float capita2;
    float poder2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Cadastre sua carta...\n");
    printf("Insira o Estado: \n");
    scanf("%c", &estado2);
    printf("Insira o código da carta: \n");
    scanf("%s", &codigo2);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome2);
    printf("Insira a população: \n");
    scanf("%u", &populacao2);
    printf("Insira a Área em km²: \n");
    scanf("%f", &area2);
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    densidade = (float) (populacao / area);
    capita = (float) (pib / populacao);
    poder =  (float) (populacao + area + pib + pontos + (-densidade) + capita);


    densidade2 = (float) (populacao2 / area2);
    capita2 = (float) (pib2 / populacao2);
    poder2 =  (float) (populacao2 + area2 + pib2 + pontos2 + (-densidade2) + capita2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Dados da Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f reais \n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade populacional: %f\n", densidade);
    printf("PIB per capita: %f\n", capita);
    printf("Super poder: %f\n ", poder);

    printf("Dados da Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f reais \n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", capita2);
    printf("Super poder: %f\n ", poder2);

    //COMPARAÇÃO DAS CARTAS
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos turísticos: %d\n", pontos > pontos);
    printf("Densidade populacional: %d\n", densidade < densidade2);
    printf("PIB per capita: %d\n", capita > capita2);
    printf("Super poder: %d\n", poder > poder2);


    return 0;
}
