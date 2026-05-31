#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-53 - Confirmar saída com 's'                                                               *");
printf("\n**********************************************************************************************************\n");

char sair;

do {
    printf("\nMenu de opcoes\n");
    printf("Executando operacao...\n");

    printf("Deseja sair? (s/n): ");
    scanf(" %c", &sair);

} while (sair != 's');

return 0;
}
