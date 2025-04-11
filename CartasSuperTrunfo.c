#include <stdio.h>

int main(){
    //Variáveis das cartas
    char estado[50];
    char codcarta[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int npontosturisticos;

    //Solicita a inserção das informações da carta 1
    printf("Vamos cadastrar a carta 1\n");
    printf("Digite o nome do estado: ");
    scanf("%s", &estado);

    //Solicita o código
    printf("Digite o código da carta: ");
    scanf("%s", &codcarta);

    //Solicita o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    //Solicita a população da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    //Solicita a área da cidade
    printf("Digite a área (em Km²): ");
    scanf("%f", &area);

    //Solicita o PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    //Solicita o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontosturisticos);

    //Informa na tela as informações da carta 1
    printf("CARTA 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codcarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d pessoas\n", populacao);
    printf("Àrea: %fKm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d\n", npontosturisticos);
    
    //Solicita a inserção das informações da carta 2
    printf("Agora vamos cadastrar a carta 2.\n");
    printf("Digite o nome do estado: ");
    scanf("%s", &estado);

    //Solicita o código
    printf("Digite o código da carta: ");
    scanf("%s", &codcarta);

    //Solicita o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    //Solicita a população da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    //Solicita a área da cidade
    printf("Digite a área (em Km²): ");
    scanf("%f", &area);

    //Solicita o PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    //Solicita o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontosturisticos);

    //Informa na tela as informações da carta 2
    printf("CARTA 2\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codcarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d pessoas\n", populacao);
    printf("Àrea: %fKm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d\n", npontosturisticos);

}
