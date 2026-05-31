#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-52 -  Soma até o número ser múltiplo de 10                                                 *");
printf("\n**********************************************************************************************************\n");

int num, soma = 0;

do {
    printf("Digite um numero: ");
    scanf("%d", &num);

    soma += num;

} while (num % 10 != 0);

printf("Soma total = %d\n", soma);

return 0;
}
