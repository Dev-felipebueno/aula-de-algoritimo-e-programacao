#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-47 - Tabuada de um número                                                                  *");
printf("\n**********************************************************************************************************\n");

int num, i = 1;

printf("Digite um numero: ");
scanf("%d", &num);

do {
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
} while (i <= 10);

return 0;
}
