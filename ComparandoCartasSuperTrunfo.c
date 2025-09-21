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

   //MENU DE COMPARAÇÃO DE CARTAS MODO SWITCH
    printf("\n*** COMPARAÇÃO DE CARTAS MODO SWITCH ***\n");

    int escolhaAtributo;

    printf("\nEscolha o atributo para comparar as cartas\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("8. Sair do Jogo\n");
    printf("Escolha um atributo (1-7) para a comparação: ");
    scanf("%d", &escolhaAtributo);

    //RESULTADO DA COMPARAÇÃO
    printf("\n*** RESULTADO DA COMPARAÇÃO ***\n");

    switch (escolhaAtributo){
        case 1: 
        printf("%s: %d habitantes\n", cidade1, populacao1);
        printf("%s: %d habitantes\n", cidade2, populacao2);
        printf("Comparando a População: %d x %d\n", populacao1, populacao2);
        
        if (populacao1 > populacao2){
            printf("%s (Carta 1) Venceu!\n", cidade1);
        } else if (populacao1 < populacao2) {
            printf("%s (Carta 2) Venceu!\n", cidade2);
        } else {
            printf("Empate\n");
        }
        break;

        case 2:
        printf("%s: %.2f m²\n", cidade1, area1);
        printf("%s: %.2f m²\n", cidade2, area2);
        printf("Comparando a Área: %.2f x %.2f\n", area1, area2);
        
        if (area1 > area2){
            printf("%s (Carta 1) Venceu!\n", cidade1);
        } else if (area1 < area2){
            printf("%s (Carta 2) Venceu!\n", cidade2);
        } else{
            printf("Empate!\n");
        }
        break;

        case 3:
        printf("%s: %.2f Bilhões de Euro\n", cidade1, pib1);
        printf("%s: %.2f Bilhões de Euro\n", cidade2, pib2);
        printf("Comparando o PIB: %.2f x %.2f\n", pib1, pib2);
        
        if (pib1 > pib2){
            printf("%s (Carta 1) Venceu!\n", cidade1);            
        } else if (pib1 < pib2) {
            printf("%s (Carta 2) Venceu!\n", cidade2);
        } else {
            printf("Empate!");
        }
        break;

        case 4:
        printf("%s: %d Pontos turísticos\n", cidade1, pontosturisticos1);
        printf("%s: %d Pontos turísticos\n", cidade2, pontosturisticos2);
        printf("Comparando Pontos Turísticos: %d x %d\n", pontosturisticos1, pontosturisticos2);
        
        if (pontosturisticos1 > pontosturisticos2){
            printf("%s (Carta 1) Venceu!\n", cidade1);
        } else if (pontosturisticos1 < pontosturisticos2){
            printf("%s (Carta 2) Venceu!\n", cidade2);
        } else{
            printf("Empate\n");
        } 
        break;

        case 5:
        printf("%s: %.2f Densidade Populacional\n", cidade1, densidade_populacional1);
        printf("%s: %.2f Densidade Populacional\n", cidade2, densidade_populacional2);
        printf("Comparando a Densidade Populacional: %.2f x %.2f\n", densidade_populacional1, densidade_populacional2);
        
        if (densidade_populacional1 > densidade_populacional2){
            printf("%s (Carta 2) Venceu!\n", cidade2);
        } else if (densidade_populacional1 < densidade_populacional2){
            printf("%s (Carta 1) Venceu!\n", cidade1);
        } else {
            printf("Empate\n");
        }
        break;

        case 6:
        printf("%s: %.2f PIB per Capita\n", cidade1, pib_per_capita1);
        printf("%s: %.2f PIB per Capita\n", cidade2, pib_per_capita2);
        printf("Comparando PIB per Capita: %.2f x %.2f", pib_per_capita1, pib_per_capita2);

        if (pib_per_capita1 > pib_per_capita2){
            printf("%s (Carta 1) Venceu!\n", cidade1);
        } else if (pib_per_capita1 < pib_per_capita2){
            printf("%s (Carta 2) Venceu!\n", cidade2);
        } else {
            printf("Empate\n");
        }  
        break;
        
        case 7:
        printf("%s: %.2f Super Poder\n", cidade1, superPoder1);
        printf("%s: %.2f Super Poder\n", cidade2, superPoder2);
        printf("Comparando Super Poder %.2f x %.2f\n", superPoder1, superPoder2);

        if (superPoder1 > superPoder2){
            printf("%s (Carta 1) Venceu!\n", cidade1);
        } else if (superPoder1 < superPoder2){
            printf("%s (Carta 2) Venceu!\n", cidade2);
        } else{
            printf("Empate\n");
        }
        break;

        case 8:
        printf("Saindo do Jogo!\n");
        break;



        default:

        printf("Opção Inválida\n");

    }

     
 
return 0;