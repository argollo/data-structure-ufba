#include <stdio.h>
#include <math.h>
   
int main(void){
	int opcao, valor1, valor2;
	printf("1. Somar dois números.\n2. Subtrair dois números\n3. Multiplicar dois números\n4. Dividir dois números\n5. Raiz quadrada de um número\nDigite a opção desejada:");
	scanf("%d %d %d", &opcao, &valor1, &valor2);
	
	if(opcao == 1)
		printf("%d", valor1+valor2)
	else if(opcao == 2)
			printf("%d", valor1-valor2)
		else if(opcao == 3)
				printf("%d", valor1*valor2)
			else if(opcao == 4)
					printf("%d", valor1/valor2)
				else if(opcao == 5)
						printf("%d", pow(valor1, 1/2))
	
return 0;
}
