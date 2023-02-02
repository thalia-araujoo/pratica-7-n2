#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char frase[500];
	
	printf("digite sua frase: ");
	gets(frase);
	
	char aux;
	int palavra = strlen(frase) - 1;
	
	
    for(int i = 0;  i<=palavra/2; i++){
    	aux = frase[i];
    	frase[i] = frase[palavra - i];
    	frase[palavra - 1] = aux;
	    
	}
	
	printf("A string invertida é: %s", frase);
	
	return 0;
}

