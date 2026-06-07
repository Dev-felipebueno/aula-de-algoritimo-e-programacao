#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-39 - Verificar se um número é positivo                                                     *");
printf("\n**********************************************************************************************************\n");

int num;

do {
	printf("Digite um numero: ");
    scanf("%d", &num);
} while(num <= 0);

printf("Numero positivo digitado\n");


return 0;
}
