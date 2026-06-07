#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-42 - Quantidade de números ímpares                                                         *");
printf("\n**********************************************************************************************************\n");

int num, i = 1, cont = 0;

while(i <= 10) {
	printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 != 0)
        cont++;

    i++;
}

printf("Quantidade de impares: %d\n", cont);

return 0;
}
