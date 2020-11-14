#include<stdio.h>

int main(){
   int numero;
   int aux = 0;
   
   printf("\n\tBienvenido\n");
   printf("\nIngrese el numero que desea saber si es primo o no:");
   scanf("%d",&numero);
   
   for(int i = 1;i<=numero;i++){
     if(numero%i == 0){
		 aux++;
		 
	 }	     
   }
   
   if(aux == 2){
	printf("\n\nEl numero %d si es primo\n",numero);   
	   
   }
   else{
	   
	   printf("\n\nEl numero %d no es primo\n",numero);   
   }

return 0;	
}
