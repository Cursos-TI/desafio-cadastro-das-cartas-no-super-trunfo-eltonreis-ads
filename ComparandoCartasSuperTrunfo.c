#include <stdio.h>

int main (){
    //Variável da carta 1
    char estado1[50];
    char codigo1 [4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float inverso_densidade_populacional1;
    float superPoder1;

    //Variável da carta 2
    char estado2[50];
    char codigo2 [4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float inverso_densidade_populacional2;
    float superPoder2;

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

    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;

    inverso_densidade_populacional1 = area1 / populacao1;

    superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pib_per_capita1 + inverso_densidade_populacional1;
        
  
    //Entrada de dados Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04(Ex. A01, B03): \n");
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

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;

    inverso_densidade_populacional2 = area2 / populacao2;

    superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pib_per_capita2 + inverso_densidade_populacional2;
    

    //Saída de dados Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de Euros\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("A Densidade Populacional é:%.2f \n", densidade_populacional1);
    printf("O PIB per capita é: %.2f\n", pib_per_capita1);
    printf("Super Poder carta 1: %.2f\n", superPoder1);

    //Saída de dados Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n",area2);
    printf("PIB: %.2f bilhões de Euros\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("A Densidade Populacional é: %.2f \n", densidade_populacional2);
    printf("O PIB per capita é: %.2f\n", pib_per_capita2);
    printf("Super Poder carta 2: %.2f\n", superPoder2);

    //COMPARAÇÃO DE CARTAS
    printf("\nCOMPARAÇÃO DE CARTAS\n");
    
    printf("\n***COMPARAÇÃO DE POPULAÇÃO***\n");
    //COMPARA A POPULAÇÃO DE DUAS CIDADES E EXIBE A MENSAGEM DA CARTA DE MAIOR POPULAÇÃO COMO VENCEDORA 
    if (populacao1 > populacao2){
        printf("Carta 1 %s Venceu!\n", cidade1);
    } else{
        printf("Carta 2 %s Venceu!\n", cidade2);
    }

    printf("\n***COMPARAÇÃO DE ÁREA***\n");
    //COMPARA A ÁREA DE DUAS CIDADES E EXIBE A MENSAGEM DA CARTA DE MAIOR ÁREA COMO VENCEDORA
    if (area1 > area2){
        printf("Carta 1 %s Venceu!\n", cidade1);
    } else{
        printf("Carta 2 %s Venceu!\n", cidade2);
    }

    printf("\n***COMPARAÇÃO DE PIB***\n");
    //COMPARA O PIB DE DUAS CIDADES E EXIBE A MENSAGEM DA CARTA DE MAIOR PIB COMO VENCEDORA
    if (pib1 > pib2){
        printf("Carta 1 %s Venceu!\n", cidade1);
    } else{
        printf("Carta 2 %s Venceu!\n", cidade2);
    }

    printf("\n***COMPARAÇÃO DE PONTOS TURÍSTICOS***\n");
    //COMPARA OS PONTOS TURÍSTICOS DE DUAS CIDADES E EXIBE A MENSAGEM DA CARTA DE MAIOR PONTOS TURÍSTICOS
    // COMO VENCEDORA
    if (pontosturisticos1 > pontosturisticos2){
        printf("Carta 1 %s Venceu!\n", cidade1);
    } else{
        printf("Carta 2 %s Venceu!\n", cidade2);
    }

    printf("\n***COMPARAÇÃO DE DENSIDADE POPULACIONAL***\n");
    //COMPARA A DENSIDADE POPULACIONAL DE DUAS CIDADES E EXIBE A MENSAGEM DA CARTA DE MENOR DENSIDADE
    //POPULACIONAL COMO VENCEDORA
    if (densidade_populacional1 < densidade_populacional2){
        printf("Carta 1 %s Venceu!\n", cidade1);
    } else{
        printf("Carta 2 %s Venceu!\n", cidade2);
    }
   
    printf("\n***COMPARAÇÃO DE PIB PER CAPITA***\n");
    //COMPARA O PIB PER CAPITA DE DUAS CIDADES E EXIBE A MENSAGEM DA CARTA DE MAIOR PIB PER CAPITA
    //COMO VENCEDORA
    if (pib_per_capita1 > pib_per_capita2){
        printf("Carta 1 %s Venceu!\n", cidade1);
    } else{
        printf("Carta 2 %s Venceu!\n", cidade2);
    }

    printf("\n***COMPARAÇÃO DE SUPER PODER***\n");
    //COMPARA O SUPER PODER DE DUAS CIDADES E EXIBE A MENSAGEM DA CARTA DE MAIOR SUPER PODER COMO VENCEDORA
    if (superPoder1 > superPoder2){
        printf("Carta 1 %s Venceu!\n", cidade1);
    } else{
        printf("Cidade 2 %s Venceu!\n", cidade2);
    }
     
 
return 0;

}