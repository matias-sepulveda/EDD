#include<stdio.h>

void numeromayor(int numero1,int numero2, int numero3);


int main(){
	
	int numero1,numero2,numero3;
	
	printf("\n\t\tBienvenido\n");
	
    printf("\nDigite el primer numero:");
	scanf("%d",&numero1);
	printf("\nDigite el segundo numero:");
	scanf("%d",&numero2);
	 printf("\nDigite el tercer numero:");
	scanf("%d",&numero3);
	

 
 numeromayor(numero1,numero2,numero3);
  	
 return 0;	
	
}

void numeromayor(int numero1,int numero2, int numero3){	
		int aux;
	    int numero[4];
	
	numero[0] = numero1;
	numero[1] = numero2;
	numero[2] = numero3;
	
	
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
	

}


