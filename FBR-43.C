#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-43 -  Soma dos pares entre 1 e 100                                                         *");
printf("\n**********************************************************************************************************\n");

int i = 2, soma = 0;

while(i <= 100) {
    soma += i;
    i += 2;
}

printf("Soma = %d\n", soma);

return 0;
}
