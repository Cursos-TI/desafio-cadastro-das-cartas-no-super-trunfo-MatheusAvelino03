#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*PROGRAMA: SUPER TRUNFO
 *ALUNO: MATHEUS AVELINO
 *INSTITUIÇÃO: ESTACIO DE SÁ
 *PROF: SERGIO CARDOSO
 *DATA: 22/03/2025
 *DATA ATUALIZAÇÃO FINAL TEMA 1: 02/04/2025
 */

/*
Foram adicionados 3 getchar( ); nas linhas do código para limpa os residuos de buffers gerados
garantindo o funcionamento e a integridade dos valores inseridos nas variaveis.
*/

// INICIALIZAÇÃO DO PROGRAMA;
int main(void) {
    // VARIAVEIS;
    char estado1, estado2;
    char numCarta1[3], numCarta2[3];
    char nCidade1[100], nCidade2[100];
    int nPopulacao_1, nPopulacao_2;
    float areaCid_1, areaCid_2;
    float pib_1, pib_2;
    int nPTuristicos_1, nPTuristicos_2;

    //intermediario - Variveis adicionais
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    //Mestre - Variavel adicional
    //float superPoder_1, superPoder_2;

    // ESTRADAS E SAÍDAS;
    // Intruções;
    printf("--------------------------SUPER TRUNFO---------------------------\n");
    printf("O jogador deve fornecer os dados de cadastro das cartas,\n");
    printf("sobre as cidades, descritos na ordem abaixo:\n");
    printf("Um letra de 'A' a 'H' (representando um dos oitos Estados).\n");
    printf("O Código da carta, deve ser inseridas de: 01 a 04.\n");
    printf("O nome da cidade segundo o estado representado.\n");
    printf("O Número de habitantes da cidade.");
    printf("A área quadrada(KM²) da cidade, insira apenas o valor com o ponto.\n");
    printf("O PIB(Produto Interno Bruto), insira apenas o valor com o ponto.\n");
    printf("O Número de ponto turísticos.\n");
    printf("-----------------------------------------------------------------\n");
    printf("\n");

    // Entrada de dados;
    printf("Carta 1:\n");

    printf("Digite a primeira Letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta: \n");
    scanf(" %2s", numCarta1);

    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome da Cidade: \n");
    fgets(nCidade1, sizeof(nCidade1), stdin);
    nCidade1[strcspn(nCidade1, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &nPopulacao_1);

    getchar(); // Limpa o buffer do teclado;
    printf("Digite a área quadrada da cidade: \n");
    scanf("%f", &areaCid_1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &nPTuristicos_1);

    printf("\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n");

    printf("Carta 2:\n");

    printf("Digite a primeira Letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da cidade: \n");
    scanf(" %2s", numCarta2);

    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome da Cidade: \n");
    fgets(nCidade2, sizeof(nCidade2), stdin);
    nCidade2[strcspn(nCidade2, "\n")] = 0;

    printf("Digite o número de habitante da cidade: \n");
    scanf("%d", &nPopulacao_2);

    printf("Digite a área quadrada da cidade: \n");
    scanf("%f", &areaCid_2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &nPTuristicos_2);

    printf("\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n");

    //----------------------------------------------------------------------------------------;

    //Calculos de densidade populacional e PIB per capita;

    //Calculo carta 1
    densidadePopulacional1 = (float) nPopulacao_1 / areaCid_1; //Densidade populacional;

    pibPerCapita1 = (float) pib_1 / nPopulacao_1; //PIB per Capita;

    //calculo carta2
    densidadePopulacional2 = (float) nPopulacao_2 / areaCid_2; //Densidade populacional;

    pibPerCapita2 = (float) pib_2 / nPopulacao_2; //PIB per Capita;

    //----------------------------------------------------------------------------------------;

    //calculos e lógica de comparação dos valores fornecidos das cartas;
    //Usando operador ternário para fazer a troca, e a relação ser "False" ou "True";
    //Sem estrutura de condições ou decições dentro do código;

    //Calculo de Super Poder da Carta 1:

    float inversaoDensidade_1 = densidadePopulacional1 / 1; //Inversão de densidade_1;

    float superPoder_1 = areaCid_1 + pib_1 + pibPerCapita1 + inversaoDensidade_1 + (float) (
                             nPopulacao_1 + nPTuristicos_1);

    //Calculo de Super Poder da Carta 2:

    float inversaoDensidade_2 = densidadePopulacional2 / 1; //Inversão de densidade_2;

    float superPoder_2 = areaCid_2 + pib_2 + pibPerCapita2 + inversaoDensidade_2 + (float) (
                             nPopulacao_2 + nPTuristicos_2);

    //----------------------------------------------------------------------------------------;


    //Apresentação dos dados na tela de ambas as cartas;
    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", numCarta1);
    printf("Nome da Cidade: %s\n", nCidade1);
    printf("População: %d\n", nPopulacao_1);
    printf("Área (em KM²): %.2f\n", areaCid_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de pontos Turísticos: %d\n", nPTuristicos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", numCarta2);
    printf("Nome da Cidade: %s\n", nCidade2);
    printf("População: %d\n", nPopulacao_2);
    printf("Área (em KM²): %.2f\n", areaCid_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de pontos Turísticos: %d\n", nPTuristicos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n");

    //----------------------------------------------------------------------------------------;

    /*
     *Comparações dos atributos (exceto estado, código e nome), incluindo o Super Poder.
     *Regra: A carta com o menor valor de densidade populacional vence;
     *Regra: A carta com o maior valor em seus atributos vence;
     *
     */

    //SINTAXE TERNÁRIO = CONDIÇÃO(RELACIONAL, VERDADEIRO OU FALSO) ?(SE) VERDADEIRO EXE: EXPRESSÃO1 :(SENÃO) FALSO EXE: ESPRESSÃO2
    //COMPARAÇÃO CARTA 1 E 2 e colocada dentro de um printf;

    //função  //txt      //Espc         //comparação relacional        //se verdade       //se falso
    //printf("Populacao: %s (%d)\n", (nPopulacao_1 > nPopulacao_2) ? "Carta 1 venceu" : "Carta 2 venceu");

    //----------------------------------------------------------------------------------------;

    //Exibir na tela as comparações das cartas e definir em que caracteristicas cada carta venceu;
    printf("Comparação das Cartas:\n");

    printf("População: %s (%d)\n", (nPopulacao_1 > nPopulacao_2) ? "Carta 1 venceu" : "Carta 2 venceu");

    printf("Área: %s (%d)\n", (areaCid_1 > areaCid_2) ? "Carta 1 venceu" : "Carta 2 venceu");

    printf("PIB: %s (%d)\n", (pib_1 > pib_2) ? "Carta 1 venceu" : "Carta 2 venceu");

    printf("Pontos Turísticos: %s (%d)\n", (nPTuristicos_1 > nPTuristicos_2) ? "Carta 1 venceu" : "Carta 2 venceu");

    printf("Densidade Populacional: %s (%d)\n",
           (densidadePopulacional1 > densidadePopulacional2) ? "Carta 1 venceu" : "Carta 2 venceu");

    printf("PIB per Capita: %s (%d)\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu" : "Carta 2 venceu");

    printf("Super Poder: %s (%d)\n", (superPoder_1 > superPoder_2) ? "Carta 1 venceu" : "Carta 2 venceu");


    system("pause");
    return 0;
}
