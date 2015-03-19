#include <stdio.h> 

float SalarioReceber(float salario){
	salario = salario+(salario*5.0/100.0);
	salario = salario-(salario*7.0/100.0);
	return salario;
}

int main(){
	float salario;
	scanf("%f",&salario); 
	printf("%f",SalarioReceber(salario));
	return (0);
}
