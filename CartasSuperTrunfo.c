#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*PROGRAMA: SUPER TRUNFO
 *ALUNO: MATHEUS AVELINO
 *INSTITUIÇÃO: ESTACIO DE SÁ
 *PROF: SERGIO CARDOSO
 *DATA: 22/03/2025
 */

/*
Foram adicionados 3 getchar( ); nas linhas do código para limpa os residuos de buffers gerados
garantindo o funcionamento e a integridade dos valores inseridos nas variaveis.
*/

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //--------------------------------------------------------------------------------------------------;

    // VARIAVEIS;
    char estado1, estado2;
    char numCarta1[3], numCarta2[3];
    char nCidade1[100], nCidade2[100];
    int nPopulacao_1, nPopulacao_2;
    float areaCid_1, areaCid_2;
    float pib_1, pib_2;
    int nPTuristicos_1, nPTuristicos_2;

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

    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", numCarta1);
    printf("Nome da Cidade: %s\n", nCidade1);
    printf("População: %d\n", nPopulacao_1);
    printf("Área (em KM²): %.2f\n", areaCid_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de pontos Turísticos: %d\n", nPTuristicos_1);

    printf("\n");

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", numCarta2);
    printf("Nome da Cidade: %s\n", nCidade2);
    printf("População: %d\n", nPopulacao_2);
    printf("Área (em KM²): %.2f\n", areaCid_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de pontos Turísticos: %d\n", nPTuristicos_2);

    system("pause");
    return 0;
}
