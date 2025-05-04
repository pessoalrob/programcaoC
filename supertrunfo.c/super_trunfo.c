#include <stdio.h>
 
 
 int main() {
          // Definindo Variáveis da primeira carta
     int pontosturisticos1, populacao1;                         // número de pontos turísticos - População
     float area1, pib1, pibpercapita1, densidadepopulacional1;  // Área (em km quadrados) e PIB (em moeda local)
     char estado1[30];                                          // Nome do estado (exemplo: Minas)
     char codigo1[30];                                          // Código da carta (ex.: A01)
     char cidade1[30];                                          // Nome da cidade (exemplo: Contagem)
 
         // Definindo Variáveis da segunda carta
     int pontosturisticos2, populacao2;                           // número de pontos turísticos - População
     float area2, pib2, pibpercapita2, densidadepopulacional2;    // Área (em km quadrados) e PIB (em moeda local)
     char estado2[30];                                            // Nome do estado (exemplo: Minas)
     char codigo2[30];                                            // ódigo da carta (ex.: A01)
     char cidade2[30];                                            // Nome da cidade (exemplo: Contagem)
 
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

    //definindo valor da densidade populacional e do Pib Percapita que já esta com variável criada
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

     //*** Batalhas de cartas no Super Trunfo ***
    
    printf("**************************************\n");
    printf(" Batalha de cartas no Super Trunfo \n");
    printf("**************************************\n\n");
    
    printf("A densidade populacional da cidade 1 é: %.2f \n", densidadepopulacional1);
    printf("A densidade populacional da cidade 2 é: %.2f \n\n", densidadepopulacional2);
    
    printf("O PIB percapita da cidade 1 é: %.2f reais por habitante \n", pibpercapita1);
    printf("O PIB percapita da cidade 2 é: %.2f reais por habitante \n\n", pibpercapita2);
    
    // Criar variável de super poder do tipo float
    
    float superpodercarta1;
    float superpodercarta2;
    
    float densidadenegativa1;
	densidadenegativa1 = -densidadepopulacional1; // invertendo o valor da densidade populacional
    float densidadenegativa2;
	densidadenegativa2 = -densidadepopulacional2; // invertendo o valor da densidade populacional
    
    
    printf("Densidade negativa da cidade 1 : %.2f \n ", densidadenegativa1);
    printf("Densidade negativa da cidade 2 : %.2f \n\n ", densidadenegativa2);
    
  
    superpodercarta1 = (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1) - densidadenegativa1;
    superpodercarta2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2) - densidadenegativa2;
    
   
    printf(" O Super Poder da Carta 1 é : %.2f \n", superpodercarta1 );
    printf(" O Super Poder da Carta 2 é : %.2f \n", superpodercarta2 );
   

     // Atributo escolho para comparação será População
     printf("\n*** Comparação do atributo População *** \n\n");

     printf("Carta 1: %s (%s): %d\n", cidade1, estado1, populacao1);
     printf("Carta 2: %s (%s): %d\n", cidade2, estado2, populacao2);

    // Código opara escolher e imprimir o resultado da carta vencedora 
     
    printf("\n*** Resultado da disputa de quem tem maior população ***\n\n");

    if (populacao1 > populacao2){
        printf("A carta 1 é a vencedora!");
    } else{
        printf("A Carta 2 é a vencedora!\n\n");
    }

    printf("\n**************************************\n\n");

    //Imprimir comparação de cartas

printf("** Comparação de Cartas **\n\n");

printf("População: "); if (populacao1 >= populacao2){ 
printf("Carta 1 Venceu (1)\n");
}else {
printf("Carta 2 Venceu (0)\n");}

printf("Area: "); if (area1 >= area2){
printf("Carta 1 Venceu (1)\n");
}else {
printf("Carta 2 Venceu (0)\n");}

printf("PIB: "); if (pib1 >= pib2){
printf("Carta 1 Venceu (1)\n");
}else {
printf("Carta 2 Venceu (0)\n");}

printf("Pontos Turísticos: "); if (pontosturisticos1 >= pontosturisticos2){
printf("Carta 1 Venceu (1)\n");
}else {
printf("Carta 2 Venceu (0)\n");}

printf("Densideda Populacional: "); if (densidadepopulacional1 <= densidadepopulacional2){
printf("Carta 1 Venceu (1)\n");
}else {
printf("Carta 2 Venceu (0)\n");}

printf("Pib Percapita: "); if (pibpercapita1 >= pibpercapita2){
printf("Carta 1 Venceu (1)\n");
}else {
printf("Carta 2 Venceu (0)\n");}

printf("Super Poder: "); if (superpodercarta1 >= superpodercarta2){
printf("Carta 1 Venceu (1)\n");
}else {
printf("Carta 2 Venceu (0)\n");}

printf("\n***** FIM da Comparação de Cartas **\n\n");

int menu;

printf("############## MENU interativo ##############\n");
printf("#      Escolha qual atributo comparar:      #\n");
printf("#                                           #\n");
printf("#      1 - Nomes das 2 cidades              #\n");
printf("#      2 - Atributo População               #\n");
printf("#      3 - Atributo Área                    #\n");
printf("#      4 - Atributo PIB                     #\n");
printf("#      5 - Atributo Nº de pontos turísticos #\n");
printf("#      6 - Atributo Densidade demográfica   #\n");
printf("#                                           #\n");
printf("#############################################\n\n");
scanf("%d", &menu);

switch (menu)
{
case 1:
    printf("######################## RESULTADO DA COMPARAÇÃO #########################\n");
    printf("#  Os Nomes das cidades são: Cidade 1: %s  e  Cidade 2: %s \n", cidade1, cidade2);
    printf("################################# FIM ####################################\n\n");

    break;

case 2:
    printf("######################## RESULTADO DA COMPARAÇÃO #########################\n");
    printf("#  A população das cidades é: %d da cidade 1 e %d da cidade 2 \n", populacao1, populacao2);
    printf("#  Cidades comparadas: %s e %s\n", cidade1, cidade2);
    printf("#  Comparando o atributo População.\n");
    printf("#  População: "); if (populacao1 > populacao2){ 
    printf(" Carta 1 Venceu (1)\n");
    }else if (populacao1 == populacao2){
    printf(" Houve empate!");
    } else {
    printf(" Carta 2 Venceu (0)\n");}
    printf("################################# FIM ####################################\n\n");
    
    
    break;

case 3:
    printf("######################## RESULTADO DA COMPARAÇÃO #########################\n");
    printf("#  Área das cidades em m²: %.3f da cidade 1 e %.3f da cidade 2\n", area1, area2);
    printf("#  Cidades comparadas: %s e %s\n", cidade1, cidade2);
    printf("#  Comparando o atributo Área.\n");
    printf("#  Área: "); if (area1 > area2){ 
    printf(" Carta 1 Venceu (1)\n");
    }else if (area1 == area2){
    printf(" Houve empate!");
    } else {
    printf(" Carta 2 Venceu (0)\n");}
    printf("################################# FIM ####################################\n\n");

    break;

case 4:
    printf("######################## RESULTADO DA COMPARAÇÃO #########################\n");
    printf("#  Os PIB's das cidades são: %.2f da cidade 1 e %.2f da cidade 2\n", pib1, pib2);
    printf("#  Cidades comparadas: %s e %s\n", cidade1, cidade2);
    printf("#  Comparando o atributo PIB.\n");
    printf("#  PIB: "); if (pib1 > pib2){ 
    printf(" Carta 1 Venceu (1)\n");
    }else if (pib1 == pib2){
    printf(" Houve empate!");
    } else {
    printf(" Carta 2 Venceu (0)\n");}
    printf("################################# FIM ####################################\n\n");

    break;

case 5:
    printf("######################## RESULTADO DA COMPARAÇÃO #########################\n");
    printf("#  Quantidade de pontos turísticos são: %d da cidade 1 e %d da cidade 2\n", pontosturisticos1, pontosturisticos2);
    printf("#  Cidades comparadas: %s e %s\n", cidade1, cidade2);
    printf("#  Comparando o atributo Pontos turísticos.\n");
    printf("#  Pontos turísticos: "); if (pontosturisticos1 >= pontosturisticos2){ 
    printf(" Carta 1 Venceu (1)\n");
    }else if (pontosturisticos1 == pontosturisticos2){
    printf(" Houve empate!");
    } else {
    printf(" Carta 2 Venceu (0)\n");}
    printf("################################# FIM ####################################\n\n");

    break;

case 6:
    printf("######################## RESULTADO DA COMPARAÇÃO #########################\n");
    printf("#  A Densidade demográfica é: %.2f da cidade 1 e %.2f da cidade 2\n", densidadepopulacional1, densidadepopulacional2);
    printf("#  Cidades comparadas: %s e %s\n", cidade1, cidade2);
    printf("#  Comparando o atributo Densidade demográfica.\n");
    printf("#  Densidade demográfica: "); if (densidadepopulacional1 < densidadepopulacional2){ 
    printf(" Carta 1 Venceu (1)\n");
    }else if (densidadepopulacional1 == densidadepopulacional2){
    printf(" Houve empate!");
    } else {
    printf(" Carta 2 Venceu (0)\n");}
    printf("################################# FIM ####################################\n\n");

    break;

default:
printf("Esta opção não está disponível!");
    break;
}

            


 
     // Proxima linha finaliza o programa
     return 0;                             
 }