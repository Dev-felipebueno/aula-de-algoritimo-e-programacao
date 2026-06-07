#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-31 - Contagem regressiva                                                                  *");
printf("\n**********************************************************************************************************\n");

int i;

for(i = 10; i >= 1; i--)
    printf("%d\n", i);


return 0;
}
