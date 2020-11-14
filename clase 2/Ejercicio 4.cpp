#include<stdio.h>

int main(){

printf("\n\tBienvenido\n");

int fin = 2;
int suma = 0 ;
int numero;

do{
	
printf("\nDigite le numero que desea sumar:");
scanf("%d",&numero);	

suma = suma + numero;	

if(numero == 0){
	fin = 1;	
}
	
}while(fin == 2);
	
	printf("\n\n\tLa suma final es: %d \n",suma);
	
return 0;	
}
