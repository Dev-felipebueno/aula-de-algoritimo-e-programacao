#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-25 - Notas e aprovação                                                                     *");
printf("\n**********************************************************************************************************\n");

float media;

printf("Digite a media do aluno: ");
scanf("%f", &media);

if (media >= 7)
    printf("Aprovado\n");
else if (media >= 5)
    printf("Recuperacao\n");
else
    printf("Reprovado\n");

return 0;
}
