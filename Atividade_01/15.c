#include <stdio.h> 

int main(){
	float salario, percentual;
	scanf("%f  %f",&salario, &percentual); 
	printf("%f",salario+(salario*percentual/100.0));
	return (0);
}
