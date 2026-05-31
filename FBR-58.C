#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-58 - A Calculadora de Bolso de 4 Operações                                                 *");
printf("\n**********************************************************************************************************\n");

float n1, n2;

char op;

printf("Digite dois numeros: ");
scanf("%f %f", &n1, &n2);

printf("Digite a operacao (+,-,*,/): ");
scanf(" %c", &op);

switch(op) {
    case '+':
        printf("Resultado = %.2f\n", n1 + n2);
        break;

    case '-':
        printf("Resultado = %.2f\n", n1 - n2);
        break;

    case '*':
        printf("Resultado = %.2f\n", n1 * n2);
        break;

    case '/':
        if(n2 != 0)
            printf("Resultado = %.2f\n", n1 / n2);
        else
            printf("Divisao por zero nao permitida.\n");
        break;

    default:
        printf("Operacao matematica nao reconhecida.\n");
}

return 0;
}
