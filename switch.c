#include <stdio.h>

int main()
{

	//calculadora
	float pn = 0; 
	float sn = 0;
	int opc = 0;
	float r

	do(
		printf ("0 - Sair\n");
		printf ("1 - Soma\n");
		printf ("2 - Subtração\n");
		printf ("3 - Multiplicação\n");
		printf ("4 - Divisão\n");
		printf ("5 - Potência\n");
		printf ("6 - Resto da divisão\n");
		printf ("7 - Quociente inteiro da divisão\n");
		printf ("8 - MMC\n");
		printf ("9 - MDC\n");
		scanf ("%d", &opc);

		if (opc == 0){
			break;
		}else{	

			printf ("Informe um número: ");
			scanf ("%f", &pn);

			printf ("Informe o segundo número: ");
			scanf ("%f", &sn);



		switch (opc){
			case 1:
				r = pn + sn;
				break
			case 2:
				r = pn - sn;
				break	
			
	}while (opc !=0);	
		

    return 0;
}
