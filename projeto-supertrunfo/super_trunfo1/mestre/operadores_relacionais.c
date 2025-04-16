#include <stdio.h>

int main(){

int a, b;
float flt;
char c[20];

printf("Escolha o valor de A: ");
scanf("%d", &a);
printf("Escolha o valor de B: ");
scanf("%d", &b);
printf("Escolha entre 1 e 20 caracteres: ");
scanf(" %c", &c);
printf("Escolha o valor de float: ");
scanf(" %f", &flt);

printf("\nA é igual a B: %d\n", a == b);
printf("A é diferente de B: %d\n", a != b);
printf("A é maior que B: %d\n", a > b);
printf("A é menor que B: %d\n", a < b);
printf("A é igual ou maior a B: %d\n", a >= b);
printf("A é igual ou menor a B: %d\n \n", a <= b);

printf("o caractere %c tem o valor de %d \n", c, c);
printf("O valor do caractere %c é maior que B: %d\n",c , c > b);
printf("o valor de float é maior que A: %d", flt > a);

}
