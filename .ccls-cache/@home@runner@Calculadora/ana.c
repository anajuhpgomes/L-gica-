#include <stdio.h>

int main()
{
	float peso = 0;
	float altura = 0;
	int idade = 0;
	float imc = 0;
	int meses = 0;
	int dias = 0;
	
	//printf("Informe a sua idade: ");
	//scanf("%d", &idade);
	
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	
	while(peso > 0 && altura > 0){
	
		imc = peso /(altura * altura);
		meses = idade * 12;
		dias = idade * 365;
		
		printf( "%d anos, %.2f kg, %.2f m.\nVocê já viveu %d meses e %d dias.\nSeu IMC é %.2f kg/m².\n", idade, peso, altura, meses, dias, imc);
		
		if (imc<18.5){
		
			printf("Você está abaixo do peso.\n");
			
		} else if (imc>=18.6 && imc<=24.9){
		
			printf("Você está no peso ideal.\n");
			
		} else if (imc>=25.0 && imc<=29.9){ 
			
		 	printf("Você está levemente acima do peso.\n");

		} else if (imc>=30.0 && imc<=34.9){

			printf("Você está com obesidade 1ºgrau.\n ");
		
		} else if (imc>=35.0 && imc<=39.9){
			
			printf("Você está com obesidade de 2ºgrau.\n ");
		
		} else {
			
			printf("Você está com obesidade de 3ºgrau.\n ");
		}	
				
		printf("Informe o seu peso: ");
		scanf("%f", &peso);
	
		printf("Informe a sua altura: ");
		scanf("%f", &altura);
	
	
	}	
	
    return 0;
}

