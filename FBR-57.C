#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
setlocale(LC_ALL, "portuguese");
printf("\n**********************************************************************************************************");
printf("\n*Aluno: FELIPE BUENO RAMOS - RA: 0025898                                                                 *");
printf("\n*Programa FBR-57 - A Central do Brinquedo Eletrônico                                                     *");
printf("\n**********************************************************************************************************\n");

char cor[20];

printf("Digite a cor: ");
scanf("%s", cor);

if(strcmp(cor, "Verde") == 0)
    printf("Vamos brincar la fora!\n");

else if(strcmp(cor, "Amarelo") == 0)
    printf("Estou ficando com soninho...\n");

else if(strcmp(cor, "Vermelho") == 0)
    printf("Estou com fome, hora do lanche!\n");

else
    printf("Cor desconhecida\n");

return 0;
}
