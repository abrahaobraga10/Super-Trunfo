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

int vencedor(int escolha1, int escolha2) {
    if (escolha1 > escolha2) {
        return 1;  // Carta 1 venceu
    } else if (escolha2 > escolha1) {
        return 2;  // Carta 2 venceu
    } else {
        return 0;  // Empate
    }

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

    printf("Digite o número total de pontos turísticos da cidade: \n");
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
    int escllhaDoJogador;
    int escolhaDoJogador2;
    int result1 = 0;
    int result2 = 0;
    int identific1;
    int identific2;

    printf("  ███████╗██╗   ██╗██████╗ ███████╗██████╗ \n");
    printf("  ██╔════╝██║   ██║██╔══██╗██╔════╝██╔══██╗\n");
    printf("  ███████╗██║   ██║██████╔╝█████╗  ██████╔╝\n");
    printf("  ╚════██║██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗\n");
    printf("  ███████║╚██████╔╝██║     ███████╗██║  ██║\n");
    printf("  ╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝\n");
    printf("\n");
    printf("  ████████╗██████╗ ██╗   ██╗███╗   ██╗███████╗ ██████╗ \n");
    printf("  ╚══██╔══╝██╔══██╗██║   ██║████╗  ██║██╔════╝██╔═══██╗\n");
    printf("     ██║   ██████╔╝██║   ██║██╔██╗ ██║█████╗  ██║   ██║\n");
    printf("     ██║   ██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ██║   ██║\n");
    printf("     ██║   ██║  ██║╚██████╔╝██║ ╚████║██║     ╚██████╔╝\n");
    printf("     ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝      ╚═════╝ \n");
    printf("\n");

    printf("_________________________________________\n");
    printf("|População --------------------(Digite 1)|\n");
    printf("|Área -------------------------(Digite 2)|\n");
    printf("|PIB --------------------------(Digite 3)|\n");
    printf("|Número de pontos turísticos --(Digite 4)|\n");
    printf("|PIB per capita ---------------(Digite 5)|\n");
    printf("|Densidade demográfica --------(Digite 6)|\n");
    printf("|________________________________________|\n");
    printf("Quais poderes você deseja comparar?: \n");
    scanf("%d", &escllhaDoJogador);
    scanf("%d", &escolhaDoJogador2);

    switch (escllhaDoJogador)
    {
    case 1:
        identific1 = 1;
        if (populacao > populacaoB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("População da carta %s : %lu\n", carta, populacao);
            printf("População da carta %s : %lu\n", cartaB, populacaoB);
            result1 = 1;
        } else if (populacaoB > populacao) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("População da carta %s : %lu\n", cartaB, populacaoB);
            printf("População da carta %s : %lu\n", carta, populacao);
            result1 = 0;
        } else {
            printf("Empate na População: %lu\n", populacao);
        }
        break;

    case 2:
    identific1 = 1;
        if (area > areaB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("Área da carta %s : %.2f\n", carta, area);
            printf("Área da carta %s : %.2f\n", cartaB, areaB);
            result1 = 1;
        } else if (areaB > area) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("Área da carta %s : %.2f\n", cartaB, areaB);
            printf("Área da carta %s : %.2f\n", carta, area);
            result1 = 0;
        } else {
            printf("Empate na Área: %.2f\n", area);
        }
        break;

    case 3:
    identific1 = 1;
        if (pib > pibB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("PIB da carta %s : %.2f bilhões\n", carta, pib);
            printf("PIB da carta %s : %.2f bilhões\n", cartaB, pibB);
            result1 = 1;
        } else if (pibB > pib) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("PIB da carta %s : %.2f bilhões\n", cartaB, pibB);
            printf("PIB da carta %s : %.2f bilhões\n", carta, pib);
            result1 = 0;
        } else {
            printf("Empate no PIB: %.2f bilhões\n", pib);
        }
        break;

    case 4:
    identific1 = 1;
        if (numeroPontosTuristico > numeroPontosTuristicoB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("Pontos turísticos da carta %s : %d\n", carta, numeroPontosTuristico);
            printf("Pontos turísticos da carta %s : %d\n", cartaB, numeroPontosTuristicoB);
            result1 = 1;
        } else if (numeroPontosTuristicoB > numeroPontosTuristico) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("Pontos turísticos da carta %s : %d\n", cartaB, numeroPontosTuristicoB);
            printf("Pontos turísticos da carta %s : %d\n", carta, numeroPontosTuristico);
            result1 = 0;
        } else {
            printf("Empate no número de pontos turísticos: %d\n", numeroPontosTuristico);
        }
        break;

    case 5:
    identific1 = 1;
        if (pibpercapta > pibpercaptaB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("PIB per capita da carta %s : %.2f\n", carta, pibpercapta);
            printf("PIB per capita da carta %s : %.2f\n", cartaB, pibpercaptaB);
            result1 = 1;
        } else if (pibpercaptaB > pibpercapta) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("PIB per capita da carta %s : %.2f\n", cartaB, pibpercaptaB);
            printf("PIB per capita da carta %s : %.2f\n", carta, pibpercapta);
            result1 = 0;
        } else {
            printf("Empate no PIB per capita: %.2f\n", pibpercapta);
        }
        break;

    case 6:
    identific1 = 1;
        /* menor densidade é melhor conforme lógica usada anteriormente */
        if (densidadepopulacao < densidadepopulacaoB) {
            printf("Carta %s (%s) venceu (menor densidade)!\n", carta, nomeDaCidade);
            printf("Densidade da carta %s : %.2f\n", carta, densidadepopulacao);
            printf("Densidade da carta %s : %.2f\n", cartaB, densidadepopulacaoB);
            result1 = 1;
        } else if (densidadepopulacaoB < densidadepopulacao) {
            printf("Carta %s (%s) venceu (menor densidade)!\n", cartaB, nomeDaCidadeB);
            printf("Densidade da carta %s : %.2f\n", cartaB, densidadepopulacaoB);
            printf("Densidade da carta %s : %.2f\n", carta, densidadepopulacao);
            result1 = 0;
        } else {
            printf("Empate na densidade populacional: %.2f\n", densidadepopulacao);
        }

    default:
        printf("Número indisponível\n");
        break;
    }

    switch (escolhaDoJogador2)
    {
    case 1:
    identific2 = 2;
        if (populacao > populacaoB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("População da carta %s : %lu\n", carta, populacao);
            printf("População da carta %s : %lu\n", cartaB, populacaoB);
            result2 = 1;
        } else if (populacaoB > populacao) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("População da carta %s : %lu\n", cartaB, populacaoB);
            printf("População da carta %s : %lu\n", carta, populacao);
            result2 = 0;
        } else {
            printf("Empate na População: %lu\n", populacao);
        }
        break;

    case 2:
    identific2 = 2;
        if (area > areaB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("Área da carta %s : %.2f\n", carta, area);
            printf("Área da carta %s : %.2f\n", cartaB, areaB);
            result2 = 1;
        } else if (areaB > area) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("Área da carta %s : %.2f\n", cartaB, areaB);
            printf("Área da carta %s : %.2f\n", carta, area);
            result2 = 0;
        } else {
            printf("Empate na Área: %.2f\n", area);
        }
        break;

    case 3:
    identific2 = 2;
        if (pib > pibB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("PIB da carta %s : %.2f bilhões\n", carta, pib);
            printf("PIB da carta %s : %.2f bilhões\n", cartaB, pibB);
            result2 = 1;
        } else if (pibB > pib) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("PIB da carta %s : %.2f bilhões\n", cartaB, pibB);
            printf("PIB da carta %s : %.2f bilhões\n", carta, pib);
            result2 = 0;
        } else {
            printf("Empate no PIB: %.2f bilhões\n", pib);
        }
        break;

    case 4:
    identific2 = 2;
        if (numeroPontosTuristico > numeroPontosTuristicoB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("Pontos turísticos da carta %s : %d\n", carta, numeroPontosTuristico);
            printf("Pontos turísticos da carta %s : %d\n", cartaB, numeroPontosTuristicoB);
            result2 = 1;
        } else if (numeroPontosTuristicoB > numeroPontosTuristico) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("Pontos turísticos da carta %s : %d\n", cartaB, numeroPontosTuristicoB);
            printf("Pontos turísticos da carta %s : %d\n", carta, numeroPontosTuristico);
            result2 = 0;
        } else {
            printf("Empate no número de pontos turísticos: %d\n", numeroPontosTuristico);
        }
        break;

    case 5:
    identific2 = 2;
        if (pibpercapta > pibpercaptaB) {
            printf("Carta %s (%s) venceu!\n", carta, nomeDaCidade);
            printf("PIB per capita da carta %s : %.2f\n", carta, pibpercapta);
            printf("PIB per capita da carta %s : %.2f\n", cartaB, pibpercaptaB);
            result2 = 1;
        } else if (pibpercaptaB > pibpercapta) {
            printf("Carta %s (%s) venceu!\n", cartaB, nomeDaCidadeB);
            printf("PIB per capita da carta %s : %.2f\n", cartaB, pibpercaptaB);
            printf("PIB per capita da carta %s : %.2f\n", carta, pibpercapta);
            result2 = 0;
        } else {
            printf("Empate no PIB per capita: %.2f\n", pibpercapta);
        }
        break;

    case 6:
    identific2 = 2;
        /* menor densidade é melhor conforme lógica usada anteriormente */
        if (densidadepopulacao < densidadepopulacaoB) {
            printf("Carta %s (%s) venceu (menor densidade)!\n", carta, nomeDaCidade);
            printf("Densidade da carta %s : %.2f\n", carta, densidadepopulacao);
            printf("Densidade da carta %s : %.2f\n", cartaB, densidadepopulacaoB);
            result2 = 1;
        } else if (densidadepopulacaoB < densidadepopulacao) {
            printf("Carta %s (%s) venceu (menor densidade)!\n", cartaB, nomeDaCidadeB);
            printf("Densidade da carta %s : %.2f\n", cartaB, densidadepopulacaoB);
            printf("Densidade da carta %s : %.2f\n", carta, densidadepopulacao);
            result2 = 0;
        } else {
            printf("Empate na densidade populacional: %.2f\n", densidadepopulacao);
        }

    default:
        printf("Número indisponível\n");
        break;
    }

   int resultado = vencedor(result1, result2);
    if (resultado == 1) {
        printf("Carta 1 venceu no geral!\n");
    } else if (resultado == 2) {
        printf("Carta 2 venceu no geral!\n");
    } else {
        printf("Empate no geral!\n");
    }

    return 0;
}


