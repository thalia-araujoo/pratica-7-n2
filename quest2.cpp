#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char  frase[100];
	int i, contador = 0;
	
	
	printf("Digite uma frase:  ");
	gets(frase);
	
	//utilizar um laço for, usando o "ou" para q possa comparar e dizer se é vogal ou nao//
	for(int i = 0; i< 100; i++){
		if((frase[i] =='a')){
			
			contador++;
			
		}
	
	}
	
	printf("A quantidade que se repete esse caractere é: %d\n\n", contador);

	return 0;
}
