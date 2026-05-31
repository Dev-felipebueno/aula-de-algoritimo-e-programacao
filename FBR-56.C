#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-56 - O Menu do Fast-Food Digital                                                           *");
printf("\n**********************************************************************************************************\n");

int opcao;

printf("Digite o numero do combo: ");
scanf("%d", &opcao);

switch(opcao) {
    case 1:
        printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n");
        break;

    case 2:
        printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
        break;

    case 3:
        printf("Combo Salada + Suco Natural - R$ 22,00\n");
        break;

    case 4:
        printf("Combo Balde de Frango + Molho - R$ 35,00\n");
        break;

    default:
        printf("Opcao invalida! Escolha de 1 a 4.\n");
}

return 0;
}
