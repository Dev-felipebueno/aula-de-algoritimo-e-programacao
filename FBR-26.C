#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-26 - Contar de 1 a 10                                                                      *");
printf("\n**********************************************************************************************************\n");

int i;

for(i = 1; i <= 10; i++)
    printf("%d\n", i);

return 0;
}
