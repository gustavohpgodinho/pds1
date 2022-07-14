#include <stdio.h>

void main() {

float a = 3.14159, b = 2.71828;
// LINHAS ADICIONADAS ESTAO AQUI
float aux = a;
a = b;
b = aux;

printf("\nPI = %f", b);
printf("\nEULER = %f", a);

}
