#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-14 - Tipo de Triângulo                                                                     *");
printf("\n**********************************************************************************************************\n");

float a, b, c;

printf("Digite o lado 1: ");
scanf("%f", &a);

printf("Digite o lado 2: ");
scanf("%f", &b);

printf("Digite o lado 3: ");
scanf("%f",&c);

if (a == b && b == c)
    printf("Triangulo Equilatero\n");
else if (a == b || a == c || b == c)
    printf("Triangulo Isosceles\n");
else
    printf("Triangulo Escaleno\n");


return 0;
}
