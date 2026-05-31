#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-49 - Pedir senha até acertar                                                               *");
printf("\n**********************************************************************************************************\n");

int senha;

do {
    printf("Digite a senha: ");
    scanf("%d", &senha);
} while (senha != 1111);

printf("Acesso liberado!\n");

return 0;
}
