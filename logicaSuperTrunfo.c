#include <stdio.h>

int main()
{
    // Variaveis para carta 1
    int populacao1, pontosTuristicos1, resultadoComparacao1, opcao1;
    float area1, pib1, densidemo1, pibcapita1, valor1_a = 0, valor1_b = 0;
    char estado1;
    char nomeCidade1[30];
    char codigo1[10];
    // Variaveis para carta 2
    int populacao2, pontosTuristicos2, opcao2;
    float area2, pib2, densidemo2, pibcapita2, valor2_a = 0, valor2_b = 0;
    char estado2;
    char nomeCidade2[30];
    char codigo2[10];

    printf("=============================\n");
    printf("**** Cadastre as Cartas ****\n");
    printf("=============================\n\n");

    // Leitura de dados da carta 1
    printf("Cadastro Carta 1 :\n\n");
    // Lê dados do estado da carta 1
    printf("Qual o estado: ");
    scanf(" %c", &estado1);
    // Lê dados do codigo da carta 1
    printf("Codigo do Estado:");
    scanf("%s", &codigo1);
    // Lê dados do nome da cidade da carta 1
    printf("Nome da cidade:");
    scanf("%s", nomeCidade1);
    // Lê dados da populaçao da carta 1
    printf("Tamanho da populaçao:");
    scanf("%d", &populacao1);
    // Lê dados da área da carta 1
    printf("Tamanho da área em (km²):");
    scanf("%f", &area1);
    // calcula a densidade da carta 1
    densidemo1 = (float)populacao1 / area1;
    // Lê dados do pib da carta
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib1);
    // calcula o Pib per capita da carta1
    pibcapita1 = pib1 / (float)populacao1;

    // Lê dados dos pontos turisticos da carta 1
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos1);
    printf("\n\n");

    // Leitura de dados da carta 2
    printf("Cadastro Carta 2 :\n\n");
    // Lê dados do estado da carta 2
    printf("Qual o Estado: ");
    scanf(" %c", &estado2);
    // Lê dados do codigo da carta 2
    printf("Codigo do Estado:");
    scanf("%s", &codigo2);
    // Lê dados do nome da cidade da carta 2
    printf("Nome da cidade:");
    scanf("%s", nomeCidade2);
    // Lê dados da populaçao da carta 2
    printf("Tamanho da populaçao:");
    scanf("%d", &populacao2);
    // Lê dados da área da carta 2
    printf("Tamanho da área em (km²):");
    scanf("%f", &area2);
    // calcula a densidade da carta 2
    densidemo2 = (float)populacao2 / area2;
    // Lê dados do pib da carta 2
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib2);
    // calcula o Pib per capita da carta1
    pibcapita2 = pib2 / (float)populacao2;

    // Lê dados dos pontos turisticos da carta 2
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Menu de escolha
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (opcao1 == 1)
    {
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
    }
    else if (opcao1 == 2)
    {
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
    }
    else if (opcao1 == 3)
    {
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
    }
    else if (opcao1 == 4)
    {
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade Demográfica\n");
    }
    else
    { // opcao1 ==5
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
    }

    scanf("%d", &opcao2);

    // Atributo 1
    if (opcao1 == 1)
    {
        valor1_a = populacao1;
        valor2_a = populacao2;
    }
    else if (opcao1 == 2)
    {
        valor1_a = area1;
        valor2_a = area2;
    }
    else if (opcao1 == 3)
    {
        valor1_a = pib1;
        valor2_a = pib2;
    }
    else if (opcao1 == 4)
    {
        valor1_a = pontosTuristicos1;
        valor2_a = pontosTuristicos2;
    }
    else
    {
        // Se nenhuma das anteriores, só pode ser a opção 5
        valor1_a = densidemo1;
        valor2_a = densidemo2;
    }

    // Atributo 2
    if (opcao2 == 1)
    {
        valor1_b = populacao1;
        valor2_b = populacao2;
    }
    else if (opcao2 == 2)
    {
        valor1_b = area1;
        valor2_b = area2;
    }
    else if (opcao2 == 3)
    {
        valor1_b = pib1;
        valor2_b = pib2;
    }
    else if (opcao2 == 4)
    {
        valor1_b = pontosTuristicos1;
        valor2_b = pontosTuristicos2;
    }
    else
    {
        // Se nenhuma das anteriores, só pode ser a opção 5
        valor1_b = densidemo1;
        valor2_b = densidemo2;
    }

    // Exibir comparação
    printf("\nComparando as cartas %s e %s:\n", nomeCidade1, nomeCidade2);

    float soma1 = 0, soma2 = 0;

    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", nomeCidade1, valor1_a);
    printf("%s: %.2f\n", nomeCidade2, valor2_a);
    soma1 += (opcao1 == 5) ? 1 / valor1_a : valor1_a;
    soma2 += (opcao1 == 5) ? 1 / valor2_a : valor2_a;

    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", nomeCidade1, valor1_b);
    printf("%s: %.2f\n", nomeCidade2, valor2_b);
    soma1 += (opcao2 == 5) ? 1 / valor1_b : valor1_b;
    soma2 += (opcao2 == 5) ? 1 / valor2_b : valor2_b;

    // Resultado final
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    if (soma1 > soma2)
    {
        printf("\nResultado: %s venceu!\n", nomeCidade1);
    }
    else if (soma2 > soma1)
    {
        printf("\nResultado: %s venceu!\n", nomeCidade2);
    }
    else
    {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}