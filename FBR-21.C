#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-21 - Número positivo ou negativo                                                           *");
printf("\n**********************************************************************************************************\n");

float num;
printf("Digite um numero: ");
scanf("%f", &num);

if (num > 0)
    printf("Positivo\n");
else if (num < 0)
    printf("Negativo\n");
else
    printf("Zero\n");

return 0;
}
