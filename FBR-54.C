#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-54 -  Validar número entre 1 e 5                                                           *");
printf("\n**********************************************************************************************************\n");

int nivel;

do {
    printf("Digite um numero entre 1 e 5: ");
    scanf("%d", &nivel);
} while (nivel < 1 || nivel > 5);

printf("Nivel escolhido: %d\n", nivel);

return 0;
}
