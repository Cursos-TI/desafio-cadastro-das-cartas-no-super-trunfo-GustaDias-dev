#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Insira o estado: \n");
    scanf("%c", &estado);

    printf("Insira o código da carta: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s" ,&nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d", pontos_turisticos);

    //Novo commit
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
