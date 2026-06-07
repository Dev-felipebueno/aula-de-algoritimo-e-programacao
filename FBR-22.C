#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-22 - Par ou ímpar                                                                          *");
printf("\n**********************************************************************************************************\n");

int num;
printf("Digite um numero: ");
scanf("%d", &num);

if (num % 2 == 0)
    printf("Par\n");
else
    printf("Impar\n");

return 0;
}
