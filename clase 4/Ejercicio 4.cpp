#include <stdio.h>


int sumararreglo(int arreglo[],int numero);

int main(){
	
	 printf("\n\tBienvenido\n");
	int numero;
	
	printf("Ingrese la cantidad de numeros que desea sumar: ");
	scanf("%d",&numero);
	
	int suma;
	int arreglo[numero];
	
	
	for(int i=0; i<numero; i++){
		printf("Ingrese uno de los numeros: ");
		scanf("%d",&arreglo[i]);
		
	}
	
	suma = sumararreglo(arreglo,numero);
	
	printf("\nLa suma del arreglo es: %d\n", suma);
	
	return 0;
}

int sumararreglo(int arreglo[],int numero){
	int suma = 0;
	
	for(int i=0; i<numero; i++){
		suma += arreglo[i];
	}
	
	return suma;
}
