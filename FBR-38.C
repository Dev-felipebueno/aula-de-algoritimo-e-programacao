#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-38 - Senha correta                                                                         *");
printf("\n**********************************************************************************************************\n");

int senha;

while(1) {
	printf("Digite a senha: ");
    scanf("%d", &senha);

    if(senha == 1234)
        break;

    printf("Senha incorreta\n");
}

printf("Acesso liberado\n");

return 0;
}
