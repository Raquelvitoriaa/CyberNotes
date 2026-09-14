#include <stdio.h> //biblioteca padrão para comandos i/o

int main (void)
{
int x=10, y=5, z;
printf("x = %d\n\n", x);
z = ++x + y; //16
/* z = x++ + y; //15 */
printf("y = %d\n\n", y);
printf("z = ++x + y = %d\n\n", z);
printf("x = %d\n\n", x);
getchar();
return 0;
}
