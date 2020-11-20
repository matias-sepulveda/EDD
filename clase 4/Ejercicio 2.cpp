#include<stdio.h>

void numeropar(int numero);

int main(){
	
	int numero;
	
	printf("\n\tDigite el numero que desea saber si es paro o impar\n");
	scanf("%d",&numero);
	
	numeropar(numero);
	
	return 0;
}

void numeropar(int numero){
	
	if( (numero%2) == 0 ){
		printf("\nSu numero %d es PAR\n",numero);
		
	}
	else {
		
		printf("\nSu numero %d es IMPAR\n",numero);
		
	}
	
	
}
