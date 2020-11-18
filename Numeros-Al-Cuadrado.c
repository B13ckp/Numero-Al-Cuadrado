
/** Jhovanny Daniel Beltran Lugo 303*/ 

#include <stdio.h>

int main() {
	
	float num1, num2, cuadrado, cuadrado1 , suma;
	
	printf("\nDigite un numero: ");
	scanf("%f",&num1);
	
	printf("\nDigite otro numero: ");
	scanf("%f",&num2);
	
	cuadrado = num1 * num1;
	cuadrado1 = num2 * num2;
	
	printf("\nEl cuadrado de su primer numero es: %.2f",cuadrado );
	
	printf("\nEl cuadrado de su segundo numero es: %.2f",cuadrado1 );
	
	suma = cuadrado + cuadrado1;
	
	printf("\nLa suma de ambos cuadrados son: %.2f",suma);
	
	return 0; 
}
