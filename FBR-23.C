#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-23 - Maior de dois números                                                                 *");
printf("\n**********************************************************************************************************\n");

int a, b;

printf("Digite dois numeros: ");
scanf("%d %d", &a, &b);

if (a > b)
    printf("Maior: %d\n", a);
else
    printf("Maior: %d\n", b);


return 0;
}
