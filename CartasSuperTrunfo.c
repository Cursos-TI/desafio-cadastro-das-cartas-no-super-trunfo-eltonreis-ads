// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Elton Reis

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

#include <stdio.h>

int main() {

    //Variável da carta 1
    char estado1[50];
    char codigo1 [4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;

    //Variável da carta 2
    char estado2[50];
    char codigo2 [4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2.
    float pibpercapita2;

    //Entrada de dados carta 1
    printf("Carta 1: \n");
    printf("Digite o Estado 1: \n");
    scanf("%s", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04(Ex. A01, B03): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em quilometros quadrado KM² da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = populacao1 / area1;

    pibpercapita1 = pib1 / populacao1; 

    //Entrada de dados Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em quilometros quadrado KM² da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turístico na cidade: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = populacao2 / area2;

    pibpercapita1 = pib2 / populacao2;

    //Saída de dados Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("A Densidade Populacional é:%.2f \n", densidadepopulaional1);
    printf("O PIB per capita é: %.2f\n", pibpercapita1);

    //Saída de dados Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
     printf("A Densidade Populacional é: %.2f \n", densidadepopulacional2);
    printf("O PIB per capita é: %.2f\n", pibpercapita2);

    return 0;
    

}
