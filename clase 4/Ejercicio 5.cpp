#include<stdio.h>

void cantdivisores(int numero);

int main(){
	
	int numero;
	
	
    printf("\n\tBienvenido\n");
	printf("\nDigite el numero que desea saber sus divisores: ");
	scanf("%d",&numero);
	
	cantdivisores(numero);
	
	printf("\n");
return 0;	
}

void cantdivisores(int numero){
	printf("Los divisores son: ");
	
	for(int i=1;i<numero;i++){
		
		if( (numero%i) == 0){
			
			printf(" %d",i);
			
		}
	}
}


