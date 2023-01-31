#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char  frase[100];
	int i, contador = 0;
	
	
	printf("Digite uma frase:  ");
	gets(frase);
	
	//utilizar um laço for, usando o "ou" para q possa comparar e dizer se é vogal ou nao//
	for(int i = 0; i< 100; i++){
		if((frase[i] =='a') || (frase[i] == 'i') || (frase[i] == 'e') || (frase[i] == 'o') || (frase[i] == 'u')){
			
			contador++;
			
		}
	
	}
	
	printf("O número de vogais: %d\n\n", contador);

	return 0;
}
