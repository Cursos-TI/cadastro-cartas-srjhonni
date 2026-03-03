#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado1, estado2; //um caractere de A até H
    char id_carta[3],id_carta2[3]; //id com 3 caracteres iniciando com estado depois numero de 1 a 99
    char cidade[20],cidade2[20]; //cidade com até 20 caracteres
    int populacao, populacao2; //numero da populaçao
    float area, area2; //area em km2
    float pib, pib2; //pib em bilhões de reais
    int qtd_turistico, qtd_turistico2; //quantidade de pontos turísticos
    printf("Bem-vindo ao jogo Super Trunfo dos Estados Brasileiros!\n");
    printf("Digite as informações da primeira carta:\n");//informações da primeireira carta
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("ID da carta começando com a letra do estado seguido de um número de 1 a 99:  ");
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
       printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("ID da carta começando com a letra do estado seguido de um número de 1 a 99:  ");
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

    printf("\nPrimeira carta:\n");//Exibição das informações das cartas
    printf("Estado: %c\n", estado1);
    printf("ID: %s\n", id_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", qtd_turistico);

    printf("\nSegunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("ID: %s\n", id_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", qtd_turistico2);
    return 0;
}