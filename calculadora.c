#include <stdio.h>
#include <math.h>

//função mmc
int mmc(int n3, int n4) {

    int resto =0;
    int a = 0;
    int b = 0;

    a = n3;
    b = n4;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( n3 * n4) / a;
}

//função mdc
int mdc(int n3, int n4) {

    int resto = 0;

    do {
        resto = n3 % n4;

        n3 = n4;
        n4 = resto;

    } while (resto != 0);

    return n3;
}

int main()
{

	//calculadora
	float pn = 0; 
	float sn = 0;
  int n1 = 0;
  int n2 = 0;
	int opc = 0;
	float r = 0;
  

	do{
		printf ("\n0 - Sair\n");
		printf ("1 - Soma\n");
		printf ("2 - Subtração\n");
		printf ("3 - Multiplicação\n");
		printf ("4 - Divisão\n");
		printf ("5 - Potência\n");
		printf ("6 - Resto da divisão\n");
		printf ("7 - Quociente inteiro da divisão\n");
		printf ("8 - MMC\n");
		printf ("9 - MDC\n\n");
		scanf ("%d", &opc);

		if (opc == 0){
			break;
		  }else if(opc > 9 || opc < 0){
      
        printf("\nOpção inválida.\n");
      
      }else{	

  			printf ("\nInforme um número: ");
  			scanf ("%f", &pn);
  
  			printf ("\nInforme o segundo número: ");
  			scanf ("%f", &sn);

  		  switch (opc){
  			  case 1:
  				  r = pn + sn;
  				  break;
        
  			  case 2:
  				  r = pn - sn;
  				  break;
        
          case 3:
            r = pn * sn;
            break;
        
          case 4:
            r = pn / sn;
            break;
          
          case 5:
            r = pow(pn, sn);
            break;
        
          case 6:
            n1 = pn;
            n2 = sn;  
            r = n1 % n2;
            break;
          
          case 7:
            n1 = pn;
            n2 = sn;
            r = n1 / n2;
          
          case 8:
            r = mmc(pn, sn);
            break;
          
          case 9:
            r = mdc(pn, sn);
            break;
        }
      
        printf("\nO resultado é: %.2f\n", r);  
      }  
    
	}while (opc !=0);	

  printf("Programa encerrado.");
  
  return 0;
}