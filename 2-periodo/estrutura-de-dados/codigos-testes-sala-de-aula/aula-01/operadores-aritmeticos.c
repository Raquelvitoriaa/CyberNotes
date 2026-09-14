#include <stdio.h> //biblioteca padrão para comandos i/o
#include <math.h> //necessário para o "fmod"

int main (void)
{
int a=10, b=3;
float c=10, d = 3.0;
printf("(Multiplicacao) => %d * %d = %d \n", a, b, a * b);
printf("(divisao) => %d / %d = %d \n", a, b, a / b);
printf("(adicao) => %d + %d = %d \n", a, b, a + b);
printf("(subtracao) => %d - %d = %d \n", a, b, a - b);
printf("(resto) => %d %% %d = %d \n", a, b, a % b);
printf("(resto com reais) => fmod(%.1f,%.1f) = %.1f\n", c, d, fmod(c,d));
printf("(potenciacao) => pow(%d,2) = %.f\n",a,pow(a,2));
printf("\n");
getchar();
return 0;
}
