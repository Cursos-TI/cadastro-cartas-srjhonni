#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado1[2], estado2[2]; //caracteres para o estado, com 2 letras
    char id_carta[2],id_carta2[2]; //id com 2 caracteres com numero de 1 a 99
    char cidade[20],cidade2[20]; //cidade com até 20 caracteres, sem espaços
    unsigned int populacao, populacao2; //numero da populaçao
    unsigned int area, area2; //area em km2
    int  pib, pib2; //pib em bilhões de reais
    int qtd_turistico, qtd_turistico2; //quantidade de pontos turísticos
    long double pib_per_capita, pib_per_capita2; //pib per capita calculado a partir do pib e da população
    long double densidade_populacional, densidade_populacional2; //densidade populacional calculada a partir da população e da área
    long double pordercarta1, pordercarta2; //variáveis para armazenar a pontuação total de cada carta
    printf("Bem-vindo ao jogo Super Trunfo dos Estados Brasileiros!\n");

    printf("Digite as informações da primeira carta:\n");//informações da primeireira carta
    printf("Estado (com duas letras EX: SP): ");
    scanf(" %s", &estado1);
    printf("ID da carta com número de 1 a 99:  ");
    scanf(" %s", id_carta);
    printf("Cidade: ");
    scanf(" %s", cidade);
    printf("População: ");
    scanf(" %lu", &populacao);
    printf("Área (km²): ");
    scanf(" %lu", &area);
    printf("PIB (bilhões de reais): ");
    scanf(" %d", &pib);
    printf("Quantidade de pontos turísticos: \n");
    scanf(" %d", &qtd_turistico);

    printf("\nDigite as informações da segunda carta:\n");//mesma coisa para a segunda carta
    printf("Estado (com duas letras EX: SP): ");
    scanf(" %s", &estado2);
    printf("ID da carta com número de 1 a 99:  ");
    scanf(" %s", id_carta2);
    printf("Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (km²): ");
    scanf(" %lu", &area2);
    printf("PIB (bilhões de reais): ");
    scanf(" %d", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &qtd_turistico2);

    pib_per_capita = (pib*1e9) / (float)populacao; //cálculo do PIB per capita
    pib_per_capita2 = (pib2*1e9) / (float)populacao2; //cálculo do PIB per capita para a segunda carta
    densidade_populacional = (float)populacao / area; //cálculo da densidade populacional
    densidade_populacional2 = (float)populacao2 / area2; //cálculo da densidade populacional para a segunda carta
    // abaxixo é o calculo do poder da carta
    float podercarta1 = populacao + area + (float)(pib*1e9) + qtd_turistico + (float)pib_per_capita - (float)densidade_populacional; //cálculo da pontuação total da primeira carta
    float podercarta2 = populacao2 + area2 + (float)(pib2*1e9) + qtd_turistico2 + (float)pib_per_capita2 - (float)densidade_populacional2; //cálculo da pontuação total da segunda carta
    

    // -- Comparação das cartas com base nos critérios estabelecidos --
    printf("\n Comparação das cartas. Se o resultador for 1 a carta 1 ganhou, se foir 0 a carta 2 ganhou.\n");
    printf("População: %d\n" , populacao > populacao2);
    printf("Área: %d\n" , area > area2);
    printf("PIB: %d\n" , pib > pib2);
    printf("Quantidade de pontos turísticos: %d\n" , qtd_turistico > qtd_turistico2);
    printf("PIB per capita: %d\n" , pib_per_capita > pib_per_capita2);
    printf("Densidade populacional: %d\n" , densidade_populacional < densidade_populacional2); //para a densidade populacional, o critério é invertido, pois uma menor densidade é considerada melhor
    printf("Poder da carta: %d\n" , podercarta1 > podercarta2); 
    return 0;
}