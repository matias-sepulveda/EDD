#include<stdio.h>

int main(){
	
char oracion[15];
int ASCII;

 printf("Digite la oracion que desea convertir a MAYUSCULAS\n");
 scanf("%[^\n]s",oracion);
	 
	for(int i=0;i<15;i++){
	
		
	ASCII = oracion[i];
	ASCII = ASCII - 32;
	oracion[i] = ASCII;
	
	// printf("%d\n",ASCII);
		
	}
	
	printf("%s\n",oracion);
	
	fflush(stdin);
	
	return 0;
	
}
