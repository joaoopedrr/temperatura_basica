#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("SEJA BEM-VINDO!\n");
	
	printf("Script de conversão de temperatura\n");
	float celsius, fahrenheit;
	int opc = 0;
	
	
	printf("\nEscolha como vai querer fazer a conversão: \n");
	
	printf("\tDigite [1] para converter de celsius para fahrenheit \n        Digite [2] para converter de fahrenheit para celsius \n");
	scanf("%d", &opc);
	
	
	
	if (opc == 1){
		printf("Digite a temperatura em graus celsius: \n");
		scanf("%f", &celsius);
	
		fahrenheit = (1.8 * celsius) + 32;
	
		printf("A temperatura %.1f celsius equivale a: %.1f fahrenheit\n", celsius, fahrenheit);
	}
	
	
	
	else if (opc == 2){
		printf("Digite a temperatura em graus fahrenheit: \n");
		scanf("%f", &fahrenheit);
		
		
		celsius = (fahrenheit - 32) * 5 / 9;
		
		printf("A temperatura %.1f fahrenheit equivale a: %.1f celsius\n", fahrenheit, celsius);
	}
	
	
	
	else{
		printf("ERRO! Opção inválida!");
	}
	return 0;
}