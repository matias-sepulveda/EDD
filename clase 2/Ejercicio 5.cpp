#include<stdio.h>

int main(){
	
	int numero;
	
	
    printf("\n\tBienvenido\n");
	printf("\nDigite el numero que desea saber sus divisores: ");
	scanf("%d",&numero);
	
	printf("Los divisores son: ");
	
	for(int i=1;i<numero;i++){
		
		if( (numero%i) == 0){
			
			printf(" %d",i);
			
		}
	}
	
	printf("\n");
return 0;	
}
