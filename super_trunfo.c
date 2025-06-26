#include <stdio.h>

int main(){

    // declaração das variaveis
    int carta = 1;
    char estado;
    char nomeCid[50];
    int populacao;
    float area;
    float pib;
    int pontosTurist;

    
    // recebendo os dados da primeira carta

    printf("Digite o estado da carta de 'A' ate 'H': ");
    scanf("%c", &estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCid);

    printf("Qual a população: ");
    scanf("%d", &populacao);

    printf("Sua área total: ");
    scanf("%f", &area);

    printf("O PIB dessa cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontosTurist);

    // lendo e mostrando os dados da primeira carta

    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Codigo: %c01\n", estado);
    printf("Nome da cidade: %s\n", nomeCid);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turisticos: %d\n", pontosTurist);

}