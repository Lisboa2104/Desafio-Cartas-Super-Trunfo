#include <stdio.h>

int main() {

//Criação das Variáveis, de ambas as cartas.

    char estado1, estado2;
    char codigo_da_carta1[50], codigo_da_carta2[50];
    char cidade1[50], cidade2[50]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

//Código de Entrada de Dados, aonde pegará as informações da Carta 1 dadas pelo Usuáriio.
//Além de guarda-las nas Variáveis.

//Observação: Tomar cuidado com as Váriaveis tipo "Char" e se atentar com o "&".

    printf("Cadastrar - Carta 1!\n");


    printf("Escolha uma letra de A a H(Repesentando um dos 8 Estados):");
    scanf(" %c", &estado1);

    printf("Digite a letra do Estado seguida de um número de 01 a 04:");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da Cidade:");
    scanf("%s", cidade1);
    
    printf("Digite a quantidade de Habitantes da Cidade:");
    scanf("%d", &populacao1);

    printf("Digite a Area da Cidade em Quilometros Quadrados:");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade:");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Cidade:");
    scanf("%d", &pontos_turisticos1);


//Aqui temos a Saída de Dados, aonde já temos as Informações nas Varíaveis, basta exibi-las na tela.
    printf("\nCarta 1 - Super Trunfo\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 );

    printf("\n");


//Basta repetir o mesmo processo de Entrada e Saída de Dados anterior.

//Observação: Não esqueça de mudar o numero das Váriaveis para a Carta 2.

    printf("Cadastrar - Carta 2!\n");


    printf("Escolha uma letra de A a H(Repesentando um dos 8 Estados):");
    scanf(" %c", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04:");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da Cidade:");
    scanf("%s", cidade2);
    
    printf("Digite a quantidade de Habitantes da Cidade:");
    scanf("%d", &populacao2);

    printf("Digite a Area da Cidade em Quilometros Quadrados:");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da Cidade:");
    scanf("%d", &pontos_turisticos2);


    printf("\nCarta 2 - Super Trunfo\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);

//Coloque a Area e PIB com 2 Casas Decimais.
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
} 