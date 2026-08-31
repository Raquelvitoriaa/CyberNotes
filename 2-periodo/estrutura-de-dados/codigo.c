// TESTE

#include <stdio.h>
#define COMISSAO 0.3

int main()
{
	double venda;
	printf("Digite o valor da venda: ");
	scanf("%lf", &venda);
	printf("Comissao = %.2lf \n", venda*COMISSAO);
	return 0;
}

---

  #include <stdio.h>
#define SOMA(a,b) (a+b)

int main()
{
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, SOMA(a,b));
	return 0;
}

---

	#include <stdio.h>
#define escreva printf

int main()
{
	escreva("Digite o valor de A: ");
	return 0;
}

---

	#include <stdio.h>

int main()
{
	int x=10, y=3;
	float z = x / y;
printf("Valor de z : %.2f\n", z);
	return 0;
}
