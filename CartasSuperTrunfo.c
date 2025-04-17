#include <stdio.h>

int main(){
    //Carta 1

    char estado1;
    char codigocarta1 [20];
    char cidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

     //Carta 2

     char estado2;
     char codigocarta2 [20];
     char cidade2 [20];
     int populacao2;
     float area2;
     float pib2;
     int pontosturisticos2;

    //Cadastramento da primeira carta:

    printf("Cadastre a sua primeira carta. \n");

    printf("Digite uma letra que represente um Estado: \n");
    scanf("%c", &estado1);
    printf("Dado salvo com sucesso! \n");

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta1);
    printf("Dado salvo com sucesso! \n");

    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade1);
    printf("Dado salvo com sucesso! \n");

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Dado salvo com sucesso! \n");

    printf("Digite a área (km) da cidade: \n");
    scanf("%f", &area1);
    printf("Dado salvo com sucesso! \n");

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Dado salvo com sucesso! \n");

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);
    printf("Dado salvo com sucesso! \n");

    printf("Carta cadastrada com sucesso! \n");

    printf(" - Estado: %c\n - Código: %s\n - Cidade: %s\n - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Pontos Turísticos: %d\n", estado1, codigocarta1, cidade1, populacao1, area1, pib1, pontosturisticos1);

    //Cadastramento da segunda carta:

    printf("Agora cadastre a segunda carta. \n");

    printf("Digite uma letra que represente um Estado: \n");
    scanf(" %c", &estado2);
    printf("Dado salvo com sucesso! \n");

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta2);
    printf("Dado salvo com sucesso! \n");

    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade2);
    printf("Dado salvo com sucesso! \n");

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Dado salvo com sucesso! \n");

    printf("Digite a área (km) da cidade: \n");
    scanf("%f", &area2);
    printf("Dado salvo com sucesso! \n");

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Dado salvo com sucesso! \n");

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
    printf("Dado salvo com sucesso! \n");

    printf("Carta cadastrada com sucesso! \n");

    printf(" - Estado: %c\n - Código: %s\n - Cidade: %s\n - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Pontos Turísticos: %d\n", estado2, codigocarta2, cidade2, populacao2, area2, pib2, pontosturisticos2);

    printf("As duas cartas foram armazenadas no sistema! \n");

    
    
}