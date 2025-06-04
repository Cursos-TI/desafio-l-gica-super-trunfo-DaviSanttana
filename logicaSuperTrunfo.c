#include <stdio.h>

int main()
{
    // Variaveis para carta 1
    int populacao1, pontosTuristicos1,opcao;
    float area1, pib1, densipop1, pibcapita1, superpoder1;
    char estado1;
    char nomeCidade1[30];
    char codigo1[10];
    // Variaveis para carta 2
    int populacao2, pontosTuristicos2;
    float area2, pib2, densipop2, pibcapita2, superpoder2;
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
    scanf("%s", codigo1);
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
    densipop1 = (float)populacao1 / area1;
    // Lê dados do pib da carta
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib1);
    // calcula o Pib per capita da carta1
    pibcapita1 = pib1 / (float)populacao1;

    // Lê dados dos pontos turisticos da carta 1
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos1);
    printf("\n\n");

    // Calcula o super poder da carta 1
    superpoder1 = (float)(populacao1 + area1 + pib1 + pibcapita1 + densipop1 + pontosTuristicos1);

    // Leitura de dados da carta 2
    printf("Cadastro Carta 2 :\n\n");
    // Lê dados do estado da carta 2
    printf("Qual o Estado: ");
    scanf(" %c", &estado2);
    // Lê dados do codigo da carta 2
    printf("Codigo do Estado:");
    scanf("%s", codigo2);
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
    densipop2 = (float)populacao2 / area2;
    // Lê dados do pib da carta 2
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib2);
    // calcula o Pib per capita da carta1
    pibcapita2 = pib2 / (float)populacao2;

    // Lê dados dos pontos turisticos da carta 2
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calcula o super poder da carta 2
    superpoder2 = (float)(populacao2 + area2 + pib2 + pibcapita2 + densipop2 + pontosTuristicos2);
    printf("=======================================\n");
    printf("=======================================\n\n");


    // Mostra os dados da primeira carta cadastradas
    printf("***** As cartas cadastradas são: *****\n\n");

    printf("Carta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s\n", nomeCidade1);
    printf("População:%d habitantes\n", populacao1);
    printf("Área:%.2f km²\n", area1);
    printf("Densidade Populacional: %f\n", densipop1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("PIB per capita: %f\n", pibcapita1);
    printf("Número de pontos turisticos:%d\n", pontosTuristicos1);
    printf("\n\n");

    // Mostra dados da segunda carta cadastrada
    printf("Carta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s\n", nomeCidade2);
    printf("População:%d habitantes\n", populacao2);
    printf("Área:%.2f km²\n", area2);
    printf("Densidade Populacional: %f\n", densipop2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("PIB per capita: %f\n", pibcapita2);
    printf("Número de pontos turisticos:%d\n\n", pontosTuristicos2);

   //Menu de comparaçao com swtich

    printf("\n========================================\n");
    printf("Escolha uma atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n"); 
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demogarfica\n");
    printf("6. Sair\n");
    printf("========================================\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
       printf("\n População\n");
       printf("%s: %d habitantes\n", nomeCidade1, populacao1);
       printf("%s: %d habitantes\n", nomeCidade2, populacao2);
       if (populacao1> populacao2)
       {
        printf("Resultado: %s venceu!\n", nomeCidade1);
       }
       else if (populacao2>populacao1)
       {
        printf("Resultado: %s venceu!\n", nomeCidade2);
       }
       else
       {
        printf("Empate!\n");
       }
        break;
    case 2:
       printf("\n Área\n");
       printf("%s: %.2f km²\n", nomeCidade1, area1);
       printf("%s: %.2f km²\n", nomeCidade2, area2);
       if (area1> area2)
       {
        printf("Resultado: %s venceu!\n", nomeCidade1);
       }
       else if (area2>area1)
       {
        printf("Resultado: %s venceu!\n", nomeCidade2);
       }
       else
       {
        printf("Empate!\n");
       }
        break;
    case 3:
       printf("\n PIB\n");
       printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
       printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
       if (pib1> pib2)
       {
        printf("Resultado: %s venceu!\n", nomeCidade1);
       }
       else if (populacao2>populacao1)
       {
        printf("Resultado: %s venceu!\n", nomeCidade2);
       }
       else
       {
        printf("Empate!\n");
       }
        break;
     case 4:
       printf("\n Pontos Turisticos\n");
       printf("%s: %d pontos Turisticos\n", nomeCidade1, pontosTuristicos1);
       printf("%s: %d pontos Turistocos\n", nomeCidade2, pontosTuristicos2);
       if (pontosTuristicos1>pontosTuristicos2)
       {
        printf("Resultado: %s venceu!\n", nomeCidade1);
       }
       else if (pontosTuristicos2>pontosTuristicos1)
       {
        printf("Resultado: %s venceu!\n", nomeCidade2);
       }
       else
       {
        printf("Empate!\n");
       }
        break; 
    case 5:
       printf("\n População\n");
       printf("%s: %.2f hab/km²\n", nomeCidade1, densipop1);
       printf("%s: %.2f hab/km²\n", nomeCidade2, densipop2);
       if (densipop1> densipop2)
       {
        printf("Resultado: %s venceu!\n", nomeCidade1);
       }
       else if (densipop2>densipop1)
       {
        printf("Resultado: %s venceu!\n", nomeCidade2);
       }
       else
       {
        printf("Empate!\n");
       }
        break;
    case 6:
        printf("Saindo do menu...\n");
        break;
    default: 
        printf("Opção inavalida ! Tente Novamente");
        break;
    }









}
