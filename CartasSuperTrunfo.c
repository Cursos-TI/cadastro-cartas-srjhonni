#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado1[2], estado2[2]; //caracteres para o estado, com 2 letras
    char id_carta[2],id_carta2[2]; //id com 2 caracteres com numero de 1 a 99
    char cidade[20],cidade2[20]; //cidade com até 20 caracteres, sem espaços
    int populacao, populacao2; //numero da populaçao
    float area, area2; //area em km2
    float pib, pib2; //pib em bilhões de reais
    int qtd_turistico, qtd_turistico2; //quantidade de pontos turísticos
    float pib_per_capita, pib_per_capita2; //pib per capita calculado a partir do pib e da população
    float densidade_populacional, densidade_populacional2; //densidade populacional calculada a partir da população e da área

    printf("Bem-vindo ao jogo Super Trunfo dos Estados Brasileiros!\n");

    printf("Digite as informações da primeira carta:\n");//informações da primeireira carta
    printf("Estado (com duas letras EX: SP): ");
    scanf(" %s", &estado1);
    printf("ID da carta com número de 1 a 99:  ");
    scanf(" %s", id_carta);
    printf("Cidade: ");
    scanf(" %s", cidade);
    printf("População: ");
    scanf(" %d", &populacao);
    printf("Área (km²): ");
    scanf(" %f", &area);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib);
    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &qtd_turistico);

    printf("\nDigite as informações da segunda carta:\n");//mesma coisa para a segunda carta
    printf("Estado (com duas letras EX: SP): ");
    scanf(" %s", &estado2);
    printf("ID da carta com número de 1 a 99:  ");
    scanf(" %s", id_carta2);
    printf("Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &qtd_turistico2);

    pib_per_capita = (pib*1e9) / (float)populacao; //cálculo do PIB per capita
    pib_per_capita2 = (pib2*1e9) / (float)populacao2; //cálculo do PIB per capita para a segunda carta
    densidade_populacional = (float)populacao / area; //cálculo da densidade populacional
    densidade_populacional2 = (float)populacao2 / area2; //cálculo da densidade populacional para a segunda carta

    printf("\nPrimeira carta:\n");//Exibição das informações das cartas
    printf("Estado: %c\n", estado1);
    printf("ID: %s\n", id_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", qtd_turistico);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);

    printf("\nSegunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("ID: %s\n", id_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", qtd_turistico2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional2);
    return 0;
}