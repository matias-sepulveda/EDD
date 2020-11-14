#include<stdio.h>

int main(){
	
	int numero[4];
	
	printf("\n\t\tBienvenido\n");
	
	for(int i=0;i<3;i++){
	
	printf("\nDigite uno de los numeros:");
	scanf("%d",&numero[i]);
	
}
	int aux;
	
	for(int i=0;i < 3;i++){
	for(int j=i+1;j < 3;j++){
		
		if(numero[i] < numero[j]){
		
		aux = numero[i];
		numero[i] = numero[j]; 	
		numero[j] = aux;
		
	}
	}	
}	
	
		
	printf("\nEl numero mayor es:%d \n",numero[0]); 
		
	
	
 return 0;	
	
}
