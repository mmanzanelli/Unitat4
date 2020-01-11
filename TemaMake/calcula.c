#include "calc.h"
#include <stdio.h>

int main(){
	int a=10;
	int b=5;
	printf("la suma de %d i %d és %d\n", a, b, suma(a,b));
	printf("la resta entre %d i %d és %d\n", a, b, resta(a,b));
	printf("la multiplicació de %d i %d és %d\n", a, b, multiplica(a,b));
	printf("la divisió entre %d i %d és %d\n", a, b, divideix(a,b));
	printf("el major entre %d i %d és %d\n", a, b, major(a,b));
} 