#include <stdio.h>

int opcao, numero1, numero2, valor;

int main(void) {

printf("-------------------------------\n");
printf("CALCULADORA");
printf("-------------------------------\n");
printf("[1] - Adicao \n");
printf("[2] - Subtracao \n");
printf("[3] - Multipicacao \n");
printf("[4] - Divisao \n");
printf("------------------------------\n");

printf("Escolha a opcao acima: ");
    scanf("%d", &opcao);

    switch (opcao)
        {
            case 1:
                 printf("Digite o primeiro valor: ");
                 scanf("%d", &numero1);
                 printf("Digite o segundo valor: ");
                scanf("%d", &numero2);
                valor = numero1 + numero2;
            break;
            case 2:
                 printf("Digite o primeiro valor: ");
                 scanf("%d", &numero1);
                 printf("Digite o segundo valor: ");
                 scanf("%d", &numero2);
                 valor = numero1 - numero2;
            break;
            case 3:
                 printf("Digite o primeiro valor: ");
                 scanf("%d", &numero1);
                 printf("Digite o segundo valor: ");
                 scanf("%d", &numero2);
                 valor = numero1 * numero2;
            break;
            case 4:
                 printf("Digite o primeiro valor: ");
                 scanf("%d", &numero1);
                 printf("Digite o segundo valor: ");
                 scanf("%d", &numero2);
                 valor = numero1 / numero2;
            break;
        }
    
    printf("o valor total e de %d", valor);

    retun 0;
}
