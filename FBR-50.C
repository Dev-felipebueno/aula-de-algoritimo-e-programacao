#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-50 -  Número positivo obrigatório                                                          *");
printf("\n**********************************************************************************************************\n");

int numero;

do {
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
} while (numero <= 0);

printf("Numero valido: %d\n", numero);

return 0;
}
