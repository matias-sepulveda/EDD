#include<stdio.h>

int primo(int numero,int* aux);

int main(){
   int numero;
   int aux = 0;
   
   printf("\n\tBienvenido\n");
   printf("\nIngrese el numero que desea saber si es primo o no:");
   scanf("%d",&numero);
   
   primo(numero,&aux);
   
   if(aux == 2){
	printf("\n\nEl numero %d si es primo\n",numero);   
	   
   }
   else{
	   
	   printf("\n\nEl numero %d no es primo\n",numero);   
   }
	

return 0;	
}

int primo(int numero,int* aux){
	
	 for(int i = 1;i<=numero;i++){
     if(numero%i == 0){
		 *aux = (*aux) + 1;
		 
	 }	     
   }
   
	return *aux;
}
