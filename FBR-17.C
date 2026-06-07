#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-17 - O Sensor do Parque Temático                                                           *");
printf("\n**********************************************************************************************************\n");

int altura;

printf("Qual altura: ");
scanf("%d", &altura);

if (altura >= 140)
    printf("Liberado\n");
else
    printf("Barrado\n");

return 0;
}
