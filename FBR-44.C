#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-44 - Contar dígitos de um número                                                           *");
printf("\n**********************************************************************************************************\n");

int num, cont = 0;
printf("Digite numero de 0 a 9: ");
scanf("%d", &num);

while(num > 0) {
    cont++;
    num /= 10;
}

printf("Digitos: %d\n", cont);

return 0;
}
