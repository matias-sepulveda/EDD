#include<stdio.h>

int main(){
	
	int numero;
	
	printf("\n\tDigite el numero que desea saber si es paro o impar\n");
	scanf("%d",&numero);
	
	
	if( (numero%2) == 0 ){
		printf("\nSu numero %d es PAR\n",numero);
		
	}
	else {
		
		printf("\nSu numero %d es IMPAR\n",numero);
		
	}
	
	return 0;
}
