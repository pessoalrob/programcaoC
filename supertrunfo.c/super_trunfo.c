#include <stdio.h>
 
 
 int main() {
          // Definindo Variáveis da primeira carta
     int pontosturisticos1, populacao1;    // número de pontos turísticos - População
     float area1, pib1;                    // Área (em km quadrados) e PIB (em moeda local)
     char estado1[30];                     // Nome do estado (exemplo: Minas)
     char codigo1[30];                     // Código da carta (ex.: A01)
     char cidade1[30];                     // Nome da cidade (exemplo: Contagem)
 
         // Definindo Variáveis da segunda carta
     int pontosturisticos2, populacao2;    // número de pontos turísticos - População
     float area2, pib2;                    // Área (em km quadrados) e PIB (em moeda local)
     char estado2[30];                     // Nome do estado (exemplo: Minas)
     char codigo2[30];                     // ódigo da carta (ex.: A01)
     char cidade2[30];                     // Nome da cidade (exemplo: Contagem)
 
         // Mostra o título do programa
     printf("Programa Super Trunfo \n");
     printf("Cadastro de Cartas\n");
 
      
     printf("\nCarta 1:\n"); // Cadastro da Carta 1
 
     printf("Digite o Estado : ");
     scanf(" %s", estado1);                 // Lê o nome do estado
 
     printf("Digite o Código : ");
     scanf("%s", codigo1);                 // Lê o código cadastrado
 
     printf("Digite o nome da Cidade : ");
     scanf("%s", cidade1);                 // Lê o nome da cidade
 
     printf("Digite a População : ");
     scanf("%d", &populacao1);             // Lê a população (habitantes)
 
     printf("Digite a Área : ");
     scanf("%f", &area1);                  // Lê a área em km quadrados
 
     printf("Digite o PIB : ");
     scanf("%f", &pib1);                   // Lê o PIB (moeda local)
 
     printf("Digite a quantidade de Pontos Turísticos : ");
     scanf("%d", &pontosturisticos1);      // Lê a quantidade de pontos turísticos
 
     // Cadastro da Carta 2
     printf("\nCarta 2:\n");
 
     printf("Digite o Estado : ");
     scanf(" %s", estado2);                // Lê o nome do estado
 
          printf("Digite o Código : ");
          scanf("%s", codigo2);                 // Lê o código como string
 
     printf("Digite o nome da Cidade : ");
     scanf("%s", cidade2);                 // Lê o nome da cidade como string
 
          printf("Digite a População : ");
          scanf("%d", &populacao2);             // Lê a população (habitantes)
 
     printf("Digite a Área : ");
     scanf("%f", &area2);                  // Lê a área em km quadrados
 
          printf("Digite o PIB : ");
           scanf("%f", &pib2);                   // Lê o PIB (moeda local)
 
     printf("Digite a quantidade de Pontos Turísticos : ");
     scanf("%d", &pontosturisticos2);      // Exibe a quantidade de pontos turísticos
 
         //Exibe o cadastro da primeira Carta
 
     printf("\n Carta 1\n"); 
     
     printf("Estado: %s\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("População de %d \n", populacao1);
     printf("Área: %.2f por km quadrado\n", area1);
     printf("PIB: %.2f (moeda local)\n", pib1);
     printf("Pontos Turísticos: %d\n", pontosturisticos1);
 
         //Exibe o cadastro da segunda Carta
 
     printf("\n Carta 2\n");
     printf("Estado: %s\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População de %d \n", populacao2);
     printf("Área: %.2f por km quadrado\n", area2);
     printf("PIB: %.2f (moeda local)\n", pib2);
     printf("Pontos Turísticos: %d\n", pontosturisticos2);

     printf("\n\n");

     // Atributo escolho para comparação será População
     printf("* Comparação do atributo População * \n\n");

     printf("Carta 1: %s (%s): %d\n", cidade1, estado1, populacao1);
     printf("Carta 2: %s (%s): %d\n", cidade2, estado2, populacao2);

    // Código opara escolher e imprimir o resultado da carta vencedora 
     
    printf("\n* Resultado da disputa de quem tem maior população *\n\n");

    if (populacao1 > populacao2){
        printf("A carta 1 é a vencedora!");
    } else{
        printf("A Carta 2 é a vencedora!");
    }

 
     // Proxima linha finaliza o programa
     return 0;                             
 }