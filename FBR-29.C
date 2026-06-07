#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-29 - Números pares de 0 a 50                                                               *");
printf("\n**********************************************************************************************************\n");

int i;

for(i = 0; i <= 50; i += 2)
    printf("%d\n", i);

return 0;
}
