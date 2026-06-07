#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-41 - Número primo com while                                                                *");
printf("\n**********************************************************************************************************\n");

int n, i = 2, primo = 1;
printf("Digite um numero: ");
scanf("%d", &n);

if(n <= 1)
    primo = 0;

while(i < n) {
    if(n % i == 0) {
        primo = 0;
        break;
    }
    i++;
}

if(primo)
    printf("Primo\n");
else
    printf("Nao primo\n");

return 0;
}
