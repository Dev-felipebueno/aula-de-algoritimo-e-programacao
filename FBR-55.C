#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-55 - Ler números e mostrar o maior (até digitar negativo)                                  *");
printf("\n**********************************************************************************************************\n");

int num, maior = 0;

do {
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > maior)
        maior = num;

} while (num >= 0);

printf("Maior numero positivo informado: %d\n", maior);

return 0;
}
