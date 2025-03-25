#include <stdio.h>

int main(){

    int carta1, carta2;
    char estado[40];
    char codigo[40];
    char nome_da_cidade[40];
    int populacao;
    float area²;
    float PIB;
    int Pontos_Turisticos;
    float DensidadePopulacional;
    float PIBpercapita;


    printf("DESAFIO SUPER TRUNFO \n");

    
    
    //entrada de dados  carta 1


    printf("CARTA 1 \n");
    
    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area²);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos );

    DensidadePopulacional = populacao / area²;
    PIBpercapita = PIB / populacao;


    //exibição de dados carta 1 

    printf("CARTA 1 \n");

    printf("Estado: %s \n", estado);

    printf("Codigo da carta: %s \n", codigo);

    printf("Nome da cidade: %s \n", nome_da_cidade);

    printf("Populacao: %d \n", populacao);

    printf("area²: %.2f \n", area²);

    printf("PIB: %.2f\n", PIB);

    printf("quantidade de pontos turisticos: %d \n", Pontos_Turisticos);

    printf("Densidade populacional: %.2f \n", DensidadePopulacional);

    printf("PIB per capita: %.2f \n", PIBpercapita);



    //entrada de dados carta 2 

    printf("CARTA 2 \n");


    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area²);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos );

    DensidadePopulacional = populacao / area²;
    PIBpercapita = PIB / populacao;
    
    
    //exibicao de dados carta 2 
      

    printf("CARTA 2\n");

    printf("Estado: %s \n", estado);

    printf("Codigo da carta: %s \n", codigo);

    printf("Nome da cidade: %s \n", nome_da_cidade);

    printf("Populacao: %d \n", populacao);

    printf("area²: %.2f \n", area²);

    printf("PIB: %.2f\n", PIB);

    printf("quantidade de pontos turisticos: %d \n", Pontos_Turisticos);

    printf("Densidade populacional: %.2f \n", DensidadePopulacional);

    printf("PIB per capita: %.2f \n", PIBpercapita);


    return 0;

}
