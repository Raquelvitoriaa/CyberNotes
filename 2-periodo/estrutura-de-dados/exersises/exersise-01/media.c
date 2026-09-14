#include <stdio.h>

int main()
 {
	float nota1, nota2, media;
	printf("Digite sua primeira nota: \n");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media <5)
		printf("REPROVADO");
	else if(media <7)
		printf("RECUPERACAO");
	else
		printf("APROVADO!");
	 
	 /* Operador Ternário
	 printf(media < 5 ? "REPROVADO" : media <7 ? "RECUPERACAO" : "APROVADO");*/
	 
	return 0;
}
