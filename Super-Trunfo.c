#include <stdio.h>


float densidadepopulacional(int populacao, float area) {
    return (float) populacao / area;
}

float calcularPibPerCapita(float pibBilhoes, int populacao) {
    return (pibBilhoes * 1000000000) / populacao;
}

float cauculoSuperPoder(int populacao,float area,float pib,int pontosTuristicos,float pipPerCapta,float densidadePopulacional){
    float superNumero = populacao + area + pib + pontosTuristicos + pipPerCapta + (1 / densidadePopulacional);
    return superNumero;
}

int main(){

    char carta[40];
    char estado[3];
    char codigoCarta[4];
    char nomeDaCidade[50];
    int  numeroPontosTuristico; 
    unsigned long int populacao;
    float area, pib;

    float pibpercapta;
    float densidadepopulacao;
    float superPoder;

    char cartaB[40];
    char estadoB[3];
    char codigoCartaB[4];
    char nomeDaCidadeB[50];
    int  numeroPontosTuristicoB;
    unsigned long int populacaoB;
    float areaB, pibB;

    float pibpercaptaB;
    float densidadepopulacaoB;
    float superPoderB;

    // Carta 1
    printf("Digite sua carta: \n");
    scanf(" %[^\n]", carta);

    printf("Digite o estado da carta: \n");
    scanf(" %s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeDaCidade);

    printf("Digite o total da população: \n");
    scanf("%lu", &populacao);

    printf("Digite a área total da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto - em bilhões de reais) da cidade: \n");
    scanf("%f",&pib);

    printf("Digite o número total de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristico);

    densidadepopulacao = densidadepopulacional(populacao,area);
    pibpercapta = calcularPibPerCapita(pib,populacao);
    superPoder = cauculoSuperPoder(populacao,area,pib,numeroPontosTuristico,pibpercapta,densidadepopulacao);
    // Carta 2
    printf("Digite sua carta: \n");
    scanf(" %[^\n]", cartaB);

    printf("Digite o estado da carta: \n");
    scanf(" %s", estadoB);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCartaB);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeDaCidadeB);

    printf("Digite o total da população: \n");
    scanf("%lu", &populacaoB);

    printf("Digite a área total da cidade em km²: \n");
    scanf("%f", &areaB);

    printf("Digite o PIB (Produto Interno Bruto- em bilhões de reais) da cidade: \n");
    scanf("%f", &pibB);

    printf("Digite o número total de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicoB);

    densidadepopulacaoB = densidadepopulacional(populacaoB,areaB);
    pibpercaptaB = calcularPibPerCapita(pibB,populacaoB);
    superPoderB = cauculoSuperPoder(populacaoB,areaB,pibB,numeroPontosTuristicoB,pibpercaptaB,densidadepopulacaoB);

    // Comparação
    int vitoriaPopulacao = populacao > populacaoB;
    int vitoriaPopulacaoB = populacaoB > populacao;

    int vitoriaArea = area > areaB;
    int vitoriaAreaB = areaB > area;

    int vitoriaPib = pib > pibB;
    int vitoriaPibB = pibB > pib;

    int vitoriaPontosTuristicos = numeroPontosTuristico > numeroPontosTuristicoB;
    int vitoriaPontosTuristicosB = numeroPontosTuristicoB > numeroPontosTuristico;

    int vitoriaDensidade = densidadepopulacao < densidadepopulacaoB;
    int vitoriaDensidadeB = densidadepopulacaoB < densidadepopulacao;

    int vitoriaPibCapta = pibpercapta > pibpercaptaB;
    int vitoriaPibCaptaB = pibpercaptaB > pibpercapta;

    int vitoriaSuperPoder = superPoder > superPoderB;
    int vitoriaSuperPoderB = superPoderB > superPoder;

    // Mostrando as informações

    printf("\n--- Carta 1 ---\n");
    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numeroPontosTuristico);
    printf("Densidade Populacional: %.2f\n", densidadepopulacao);
    printf("PIB per Capta: %.2f\n", pibpercapta);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\n--- Carta 2 ---\n");
    printf("Carta: %s\n", cartaB);
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoCartaB);
    printf("Nome da Cidade: %s\n", nomeDaCidadeB);
    printf("População: %lu\n", populacaoB);
    printf("Área: %.2f\n", areaB);
    printf("PIB: %.2f\n", pibB);
    printf("Número de pontos turísticos: %d\n", numeroPontosTuristicoB);
    printf("Densidade Populacional: %.2f\n", densidadepopulacaoB);
    printf("PIB per Capta: %.2f\n", pibpercaptaB);
    printf("Super Poder: %.2f\n", superPoderB);

    printf("--- Resultados ---\n");
    printf("--- Carta 1 ---\n");
    printf("População: Venceu(%d)\n",vitoriaPopulacao);
    printf("Área: Venceu(%d)\n",vitoriaArea);
    printf("PIB: Venceu(%d)\n",vitoriaPib);
    printf("Pontos turísticos: Venceu(%d)\n",vitoriaPontosTuristicos);
    printf("Densidade Populacional: Venceu(%d)\n",vitoriaDensidade);
    printf("PIB per Capita: Venceu(%d)\n",vitoriaPibCapta);
    printf("Super Poder: Venceu(%d)\n",vitoriaSuperPoder);


    printf("--- Carta 2 ---\n");
    printf("População: Venceu(%d)\n",vitoriaPopulacaoB);
    printf("Área: Venceu(%d)\n",vitoriaAreaB);
    printf("PIB: Venceu(%d)\n",vitoriaPibB);
    printf("Pontos turísticos: Venceu(%d)\n",vitoriaPontosTuristicosB);
    printf("Densidade Populacional: Venceu(%d)\n",vitoriaDensidadeB);
    printf("PIB per Capita: Venceu(%d)\n",vitoriaPibCaptaB);
    printf("Super Poder: Venceu(%d)\n",vitoriaSuperPoderB);

    return 0;
}