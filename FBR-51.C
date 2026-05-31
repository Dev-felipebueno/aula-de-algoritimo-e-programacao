#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-51 -  Contagem regressiva de 10 até 1                                                      *");
printf("\n**********************************************************************************************************\n");

int i = 10;

do {
    printf("%d\n", i);
    i--;
} while (i >= 1);

return 0;
}
