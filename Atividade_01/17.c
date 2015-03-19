#include <stdio.h> 

float SalarioReceber(float salario){
	salario = salario+50;
	salario = salario-(salario*10.0/100.0);
	return salario;
}

int main(){
	float salario;
	scanf("%f",&salario); 
	printf("%f",SalarioReceber(salario));
	return (0);
}

