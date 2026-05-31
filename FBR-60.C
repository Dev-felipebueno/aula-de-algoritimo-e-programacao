#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-60 - O Validador de Dias Úteis                                                             *");
printf("\n**********************************************************************************************************\n");

int dia;

printf("Digite um numero de 1 a 7: ");
scanf("%d", &dia);

switch(dia) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia Util. Acesso liberado para o trabalho.\n");
        break;

    case 1:
    case 7:
        printf("Fim de Semana. Predio fechado.\n");
        break;

    default:
        printf("Numero de dia invalido.\n");
}

return 0;
}
