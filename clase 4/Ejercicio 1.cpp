#include<stdio.h>

int numeromayor(int numero1, int numero2);

int main(){
	
	int numero1,numero2;
	
	printf("\n\t\tBienvenido\n");
	printf("\nDigite dos numero de la forma A B\n");
	scanf("%d %d",&numero1,&numero2);
	
	 numeromayor(numero1, numero2);
	 
return 0;

}

int numeromayor(int numero1, int numero2){
	
  if(numero1 < numero2){
		
		printf("\nEl numero mayor es: %d\n",numero2);
		
	}
	if(numero1 > numero2){
		
		printf("\nEl numero mayor es: %d\n",numero1);
		
	}
	if(numero1 == numero2){
		
		printf("\nLos numeros son iguales\n");
		
			}
			return 0;	

}	
