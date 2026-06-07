#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-20 - Ano bissexto                                                                          *");
printf("\n**********************************************************************************************************\n");

int ano;

printf("Digite um ano: ");
scanf("%d", &ano);

if (ano % 4 == 0)
    printf("Bissexto\n");
else
    printf("Nao bissexto\n");

return 0;
}
