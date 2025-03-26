#include <stdio.h>

int main(){
    // Carta 1
    char Estado1[5] = "A";
    char Codigo1[5] = "A01";
    char Cidade1[9] = "Salvador";
    int Populacao1 = 3000000;
    float Area1 = 693.442;
    float PIB1 = 62.954;
    int NumeroDePontosTuristicos1 = 50;

    // Informacoes da Carta 1
    printf("Carta 1:\n");
    printf("O Estado é: %s\n", Estado1);
    printf("O Codigo é: %s\n", Codigo1);
    printf("A Cidade é: %s\n", Cidade1);
    printf("A Populacao é: %d\n", Populacao1);
    printf("Area é: %.3f\n", Area1);
    printf("O PIB é: %.3f bilhões de reais\n", PIB1);
    printf("O Numero de Pontos Turisticos é: %d\n", NumeroDePontosTuristicos1);
    printf("\n");

    // Carta 2
    char Estado2[5] = "B";
    char Codigo2[5] = "B02";
    char Cidade2[15] = "Porto Alegre";
    int Populacao2 = 2000000;
    float Area2 = 423.442;
    float PIB2 = 88.954;
    int NumeroDePontosTuristicos2 = 32;

    // Informacoes da Carta 2
    printf("Carta 2:\n");
    printf("O Estado é: %s\n", Estado2);
    printf("O Codigo é: %s\n", Codigo2);
    printf("A Cidade é: %s\n", Cidade2);
    printf("A Populacao é: %d\n", Populacao2);
    printf("Area é: %.2f KM²\n", Area2);
    printf("O PIB é: %.2f bilhões de reais\n", PIB2);
    printf("O Número de Pontos Turísticos é: %d\n", NumeroDePontosTuristicos2);

    return 0;
}