#include<stdio.h>

void mayusculas();

char oracion[15];
int ASCII;

int main(){
	

 printf("Digite la oracion que desea convertir a MAYUSCULAS\n");
 scanf("%[^\n]s",oracion);
	
	mayusculas();
	
	return 0;
	
}

void mayusculas(){

for(int i=0;i<15;i++){
	
		
	ASCII = oracion[i];
	ASCII = ASCII - 32;
	oracion[i] = ASCII;
	
	// printf("%d\n",ASCII);
		
	}
	
	printf("%s\n",oracion);

fflush(stdin);

}
