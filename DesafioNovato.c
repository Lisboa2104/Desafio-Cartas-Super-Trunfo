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
//Adicionamos mais duas novas variáveis ao código.
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;


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

//Faremos o calculo da Densidade Populacional e do Pib per Capita.
//Basta didirmos o valor que está em duas variáveis, e atribuir o resultado nas novas variáveis.
//Usando o (float) antes do calculo, desta maneira, mesmo se os valores forem dados tudo em Inteiro, o resultado poderá ser transferido para Float.
//Fazendo o calculo dessa maneira, evita erros e faz os calculos ficarem mais corretos.
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;

    

//Aqui temos a Saída de Dados, aonde já temos as Informações nas Varíaveis, basta exibi-las na tela.
    printf("\nCarta 1 - Super Trunfo\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 );
//Lembrando sempre de colocar o Float em %.2f, colocando em 2 Casas decimais.
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade_populacional1);
    printf("PIB Per Capita: %.2f\n", pib_per_capita1);
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

    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 =  (float) pib2 / populacao2;


    printf("\nCarta 2 - Super Trunfo\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade_populacional2);
    printf("PIB Per Capita: %.2f\n", pib_per_capita2);

    return 0;
} 