#include<stdio.h>

int main(){
	
	int* numero1 = new int;
	int* numero2 = new int;
	int* sumar = new int;
	
	printf("\n\tBienvenido");
	
	printf("\nIngrese le primer numero: ");
	scanf("%d", numero1);
	
	printf("\nIngrese el segundo numero: ");
	scanf("%d", numero2);
	
	*sumar = *numero1 + *numero2;
	
	delete numero1;
	delete numero2;
	
	printf("\n\nEl resultado de la suma de los dos numeros es: %d \n",*sumar);
	
	delete sumar;
	
	return 0;
}
