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

---

	#include <stdio.h>

int f1()
{
	int x = 5;
    printf("Valor de x : %i\n", x);
	return 0;
}

int main()
{
	int x = 10;
	f1();
    printf("Valor de x : %i\n", x);
	return 0;
}

---

	#include <stdio.h>

int f1()
{
	int x = 5;
    printf("Endereco de x na funcao f1() : %i\n", &x);
	return 0;
}

int main()
{
	int x = 10;
	f1();
    printf("Endereco de x na funcao main() : %i\n", &x);
	return 0;
} 

---

	#include <stdio.h>

int main()
{
	int x=20,y=30 ;
	if (x>0)
	{
		int x=10;
		printf("Valor de x+y: %i\n", x+y);
	}
	printf("Valor de x+y: %i\n", x+y);
	return 0;
}

---
	
	#include <stdio.h>

int x = 10;

int f1()
{
		printf("Valor de x: %i\n", x);
		return 0;
}

int main()
{
    
	printf("Valor de x: %i\n", x);
	f1();
	return 0;
}
