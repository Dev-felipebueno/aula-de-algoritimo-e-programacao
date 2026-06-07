#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-28 - Soma dos 100 primeiros números                                                        *");
printf("\n**********************************************************************************************************\n");

int i, soma = 0;

for(i = 1; i <= 100; i++)
    soma += i;

printf("Soma = %d\n", soma);

return 0;
}
