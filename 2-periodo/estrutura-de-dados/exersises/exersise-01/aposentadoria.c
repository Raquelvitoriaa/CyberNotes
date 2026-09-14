#include <stdio.h>
#include <ctype.h>

int main()
 {
	char sexo;
	int tempo;
	
	printf("Digite seu sexo (M/F): ");
	scanf("%c", &sexo);
	printf("Digite sua idade: ");
	scanf("%i", &tempo);
	
	sexo = toupper(sexo);
	if(sexo=='M' && tempo >= 35 || sexo=='F' && tempo >= 25)
		printf("APOSENTADO(A)");
	else
		printf("NA ATIVA!");
	return 0;
}
