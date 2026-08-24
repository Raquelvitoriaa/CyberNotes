#include <stdio.h>
#include <stdlib.h>

void Exercicio01() {

  int numero1, numero2, valor;
  
  printf("Exercicio 1: Faca um algoritmo que recebe dois valores inteiros e mostra o resultado da multiplicacao.");

  printf("==================================================\n");
  printf("MULTIPICACAO\n");
  printf("===================================================\n");

  printf("Digite o primeiro valor: ");
  scanf("%d", &numero1);
  printf("Digite o segundo valor: ");
  scanf("%d", &numero2);

  printf("O valor total foi de: %d", valor);
}

void Exercicio02() {

  int numero, antecessor, sucessor;

  printf("Fazer um algoritmo que leia um numero e mostre o seu antecessor e o seu sucessor");
}

void Exercicio03() {

  Printf("Fazer um algoritmo que obtenha dois numeros inteiros, x e y, mostre o quociente e o resto da divisao inteira ente elas");

}

void Exercicio04() {

  printf("Fazer um algoritmo que calcule e mostre: a soma entre dois numeros, o produto entre ele e o quociente entre ele");
}

void Exercicio05() {

  printf("Fazer um algoritmo que converta centimentros para polegadas (1pol = 2,54cm)");
}

void Exercicio06() {

  printf("Faca um algoritmo que recebe o valor do raio de um circulo e apresenta o valor da area do circulo.");
}

void Exercicio07() {

  printf("Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro (A = 2r (h
}

void Exercicio08() {
}

void Exercicio09() {
}

void Exercicio10() {
}

void Exercicio11() {
}

void Exercicio12() {
}

void Exercicio13() {
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
