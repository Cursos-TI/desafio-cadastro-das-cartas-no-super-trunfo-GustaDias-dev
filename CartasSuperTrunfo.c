#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado;
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float capita;
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
    scanf("%d", &populacao);
    printf("Insira a Área em km²: \n");
    scanf("%f", &area);
    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontos);

    densidade = (float) (populacao / area);
    capita = (float) (pib / populacao);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f reais \n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade populacional: %f\n", densidade);
    printf("PIB per capita: %f\n", capita);


    return 0;
}
