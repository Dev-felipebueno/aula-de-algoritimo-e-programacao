#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-45 - Menu até escolher sair                                                                *");
printf("\n**********************************************************************************************************\n");

int opcao = 0;

while(opcao != 4) {
    printf("\n1 - Deposito");
    printf("\n2 - Saque");
    printf("\n3 - Saldo");
    printf("\n4 - Sair");
    printf("\nOpcao: ");
    scanf("%d", &opcao);
}

printf("Programa encerrado\n");


return 0;
}
