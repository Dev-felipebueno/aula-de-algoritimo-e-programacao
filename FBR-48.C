#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-48 - Menu com opção de sair                                                                *");
printf("\n**********************************************************************************************************\n");

int opcao;

do {
    printf("\n1 - Mensagem\n");
    printf("2 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Voce escolheu a mensagem!\n");
    }

} while (opcao != 2);

return 0;
}
