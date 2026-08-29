#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

   setlocale(LC_ALL, "portugueses");

void Exercicio01() {

   int main() {
      
  int numero1, numero2, valor;
  
  /* Exercicio 1: Faca um algoritmo que recebe dois valores inteiros e mostra o resultado da multiplicacao. */

  printf("\n==================================================\n");
  printf("\nMULTIPICACAO\n");
  printf("\n===================================================\n");

  printf("Digite o primeiro valor: ");
  scanf("%d", &numero1);
  printf("Digite o segundo valor: ");
  scanf("%d", &numero2);

  printf("O valor total foi de: %d", valor);
 }
}

void Exercicio02() {

  /* Exercicío 2: Fazer um algoritmo que leia um numero e mostre o seu antecessor e o seu sucessor */

  int main() {

     int numero, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("antecessor: %d\n", antecessor);
    printf("sucessor: %d\n", sucessor);
  }
  
}

void Exercicio03() {

  /* Exercicio 3: Fazer um algoritmo que obtenha dois numeros inteiros, x e y, mostre o quociente e o resto da divisao inteira ente elas. */

  int main() {

      int x, y, quociente, resto;

    printf("Digite o valor x: ");
    scanf("%d", &x);
    printf("Digite o valor y: ");
    scanf("%d", &y);

    if(y == 0) {
      printf("\nErro: Divisao por zero nao permitida.\n");
    }else{
      quociente = x / y;
      resto = x % y;

      printf("\nResultados: \n");
      printf("Quociente: %d\n", quociente);
      printf("Resto: %d\n", resto);
    }
  }
}

void Exercicio04() {

  /* Exercicio 4: Fazer um algoritmo que calcule e mostre: a soma entre dois numeros, o produto entre ele e o quociente entre ele. */

  int main() {

     float num1, num2, soma, produto, quociente;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    produto = num1 * num2;

    printf("\n-----Resultados------\n");
    printf("soma: %.2f\n", soma);
    printf("produto: %.2f\n", produto);

    if(num2 != 0) {
      quociente = num1 / num2;
      printf("quociente: %.2f\n", quociente);
    }else{
      printf("quociente: Error - Divisao por zero nao permitida.\n");
    }
  }


void Exercicio05() {

  /* Exercicio 5: Fazer um algoritmo que converta centimentros para polegadas (1pol = 2,54cm) */

  int main() {

     float centimetros, polegadas;

    printf("Digite o valor em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimentros / 2.54;

    printf("%.2f centimentros equivalem a %.2f polegadas.\n", centimentros, polegadas);
  }
}

void Exercicio06() {
  
  /* Exercicio 6: Faça um algoritmo que recebe o valor do raio de um circulo e apresenta o valor da area do circulo. */

  int main() {

     float raio, area;

    const float PI = 3.14159;

    printf("Digite o valor do raio do circuito: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("A area do circulo com raio %.2f e: %.2f\n", raio, area);
  }
}

void Exercicio07() {

  /* Exercicio 7: Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro (A = 2πr(h + r), V = πr2h) */

     int main() {

  const float PI = 3.14159;

  printf("\n===============CILINDRO=========================\n");

  printf("Digite o valor do raio(r): \n");
  scanf("%f", &raio);

  printf("Digite o valor da altura(h): \n");
  scanf("%f", &altura);

  area = 2 * PI * raio * (altura + raio);
  volume = PI * (raio * raio) * altura;

   printf("\n--------RESULTADOS----------n");
   printf("\nArea total: %.2f\n", area);
   printf("\nVolume: %.2f\n", volume);
   printf("\n------------------------------\n);
      
 }
}

void Exercicio08() {

  /* Exercicío 8: Escreva um algoritmo que recebe valor do salário fixo e o total de vendas efetuadas por um vendedor de uma loja durante o mês (em dinheiro). Sabendo que o vendedor ganha 15% de comissão sobre as vendas, informar o salário fixo e salário do final do mês */

   int main() {

      double sal_fixo, vendas, comissao, sal_final;

      printf("Digite o salario fixo do vendedor: ");
      scanf("%lf", &sal_fixo);

      printf("Digite o total de vendas(em dinheiro): ");
      scanf("%lf", &vendas);

      comissao = vendas * 0.15;

      sal_final = sal_fixo + comissao;

      printf("\n--------RETORNO MENSAL------\n");
      printf("Salario Fixo: R$ %.2f\n", sal_fixo);
      printf("Salario Final: R$ %.2f\n", sal_final);
      
   }
}

void Exercicio09() {

  /* Exercicio 9: Ler dois valores para as variáveis A e B, efetuar as trocas de valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar valores trocados */

   int main() {

      int A, B, aux;

      printf("Digite o valor de A: \n");
      scanf("%d", &A);
      printf("Digite o valor de B: \n");
      scanf("%d", &B);

      aux = A;
      A = B;
      B = aux;

      printf("\n============Valores Trocados============\n");
      printf("O valor trocado de A: %d\n", A);
      printf("O valor trocado de B: %d\n", B);
      
   }
}

void Exercicio10() {

  /* Exercicío 10: Faça um algoritmo que mostra a quantidade de cédulas de um caixa eletrônico de um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida apresenta a quantidade de cada cédula que o cliente deverá receber, de forma que a quantidade de cédulas seja o menor possível. */

   int main() {

      int valor, resto;
      int n200, n100, n50, n20, n10, n5, n2;

      printf("Digite o valor do saque: ");
      scanf("%d", &valor);

      n200 = valor / 200;
      resto = valor % 200;

      n100 = valor / 100;
      resto = valor % 100;

      n50 = valor / 50;
      resto = valor % 50;

      n20 = valor / 20;
      resto = valor % 20;

      n10 = valor / 10;
      resto = valor % 10;

      n5 = valor / 5;
      resto = valor % 5;

      n2 = valor / 2;
      resto = valor % 2;

      printf("\n----------Quantidades de Cedulas---------\n");
      if(n200 > 0) printf("%d nota(s) de R$200\n", n200);
      if(n100 > 0) printf("%d nota(s) de R$100\n", n100);
      if(n50 > 0) printf("%d nota(s) de R$50\n", n50);
      if(n20 > 0) printf("%d nota(s) de R$20\n", n20);
      if(n10 > 0) printf("%d nota(s) de R$10\n", n10);
      if(n5 > 0) printf("%d nota(s) de R$5\n", n5);
      if(n2 > 0) printf("%d nota(s) de R$2\n", n2);

      if(resto > 0) {
         
         printf("Sobra (moedas): R$ %d\n", resto);
      }
      
   }
}

void Exercicio11() {
   
  /* Exercicio 11: Faça um algoritmo que auxiliará um funcionário de um caixa de supermecado. O algoritmo deverá receber como entrada o valor da compra do cliente e o valor pago pelo cliente, em seguida o algoritmo deverá apresentar o tronco da compra, de forma que o mesmo deve apresenar a quantidade de cédulas e moedas para compor o troco do cliente. */

   int main() {

      double val_compra, val_pago, troco_total;
      int n200, n100, n50, n20, n10, n5, n2;
      int centavos, c100, c50, c25, c10, c5, c1;  /* 100 = 1 real */

      printf("");
   }
}

void Exercicio12() {

  /* Exercicio 12: Fazer um algoritmo que calcule a média aritmética dos números 7, 8 e 9 e a média nos númreos 4, 5 e 6. Mostre a soma das duas médias e a médias das médias. */
}

void Exercicio13() {

  /* Exercicio 13: O preço de um automóvel é calculado pela soma do preço de fábrica, o preço dos impostos(45% do preço de fábrica) e a porcentagem do revendedor(28% do preço de fábrica). Fazer um algoritmo que leia o preço de fábrica. Calcule e mostre o preço final do carro. */
}


int main() {
  
 int opcao;
 do {
   
  printf("================================================\n");
  printf("\n MENU DOS EXERCICIOS\n ");
  printf("================================================\n");
  printf("[1] - Exercicio01  \n");
  printf("[2] - Exercicio02  \n");
  printf("[3] - Exercicio03  \n");
  printf("[4] - Exercicio04  \n");
  printf("[5] - Exercicio05  \n");
  printf("[6] - Exercicio06  \n");
  printf("[7] - Exercicio07  \n");
  printf("[8] - Exercicio08  \n");
  printf("[9] - Exercicio09  \n");
  printf("[10] - Exercicio10  \n");
  printf("[11] - Exercicio11  \n");
  printf("[12] - Exercicio12  \n");
  printf("[13] - Exercicio13  \n");
  printf("[0] - Sair\n");

  printf("Digite uma opcao: [01-14]:");
   scanf("%d", opcao);

   switch(opcao) {

     case 1: 
       Exercicio01();
     break;
     case 2: 
       Exercicio02();
     break;
     case 3: 
       Exercicio03();
     break;
     case 4: 
       Exercicio04();
     break;
     case 5: 
       Exercicio05();
     break;
     case 6: 
       Exercicio06();
     break;
     case 7: 
       Exercicio07();
     break;
     case 8: 
       Exercicio08();
     break;
     case 9: 
       Exercicio09();
     break;
     case 10: 
       Exercicio10();
     break;
     case 11: 
       Exercicio11();
     break;
     case 12: 
       Exercicio12();
     break;
     case 13: 
       Exercicio13();
     break;

     printf("Saindo do sistema...");
     printf("Opcao invalida! Tente novamente.");
   }

   if(opcao != 0) {
     printf("\n Pressione qualquer tecla para voltar ao menu..");
     getchar();
     getchar();
   }
   
}while(opcao != 0);

  system("pause");
  return 0;
}
