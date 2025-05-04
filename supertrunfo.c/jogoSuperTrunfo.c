#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int EscolhaJogador, EscolhaComputador, menu;

    srand(time(0));
    EscolhaComputador = rand () % 3 + 1;

printf("### VAMOS JOGAR JOKENPÔ COM O PC ###\n\n");
printf("ESCOLHA UMA OPÇÃO:\n\n");
printf("1 - Ler as regras.\n");
printf("2 - Iniciar o Jogo.\n");
printf("3 - Sair do jogo\n\n");
scanf("%d", &menu);



switch (menu){

case 1:
printf("######################################################\n");
printf("#        As regras do jogo são as seguintes:         #\n");
printf("#  Existem 3 opções para você escolher: Pedra, Papel #\n");
printf("#  e tesoura, a PEDRA ganha da TESOURA, a TESOURA    #\n");
printf("#      ganha do PAPEL e o Papel ganha da PEDRA.      #\n");
printf("#  O usuario escolherá um número que represente um   #\n");
printf("#  dos ítens (pedra, papel, tesoura) e o computador  #\n");
printf("#    escolhera também, então teremos um vencedor.    #\n");
printf("#                    BOA SORTE!!                    #\n");
printf("######################################################\n");
    break;

case 2:
    printf("### COMEÇE O JOGO ESCOLHENDO UM NÚMERO: ###\n");
    printf("1 - PEDRA\n");
    printf("2 - PAPEL\n");
    printf("3 - TESOURA\n");
    scanf("%d", &EscolhaJogador);

    switch (EscolhaJogador){

        case 1:
        printf("Jogador: Pedra - ");
        break;

        case 2:
        printf("Jogador: Papel - ");
        break;

        case 3:
        printf("Jogador: Tesoura - ");
        break;
        
        default:
        printf("Opção Inválida!\n");
        break;
    }

        switch (EscolhaComputador){

            case 1:
            printf("Computador: Pedra.\n");
            break;
    
            case 2:
            printf("Computador: Papel.\n");
            break;
    
            case 3:
            printf("Computador: Tesoura.\n");
            break;
            
        }

        if (EscolhaJogador == EscolhaComputador)
        {
        printf("############################\n");
        printf("###   Houve um empate!   ###\n");
        printf("############################\n");
        } else if ((EscolhaJogador == 1) && (EscolhaComputador == 3) ||
           (EscolhaJogador == 2) && (EscolhaComputador == 1) ||   
           (EscolhaJogador == 3) && (EscolhaComputador == 2))
        {
        printf("#############################\n");
        printf("## Parabéns, você venceu!  ##\n");
        printf("#############################\n");
        } else {
        printf("#########################################\n");
        printf("##  Infelizmente o Computador venceu!  ##\n");
        printf("#########################################\n");
        }
        

    break;
       
case 3:
printf("##################################\n");
printf("FIM DO JOGO, ATÉ MAIS!\n");
printf("##################################\n\n");
break;

default:
break;
    

return 0;



    }

}
