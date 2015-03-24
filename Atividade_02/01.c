#include <stdio.h> 

int main(){
	float nota1,nota2,nota3,media;
	char conceito = 'A';
	
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	media = ((nota1*2)+(nota2*3)+(nota3*5))/10;
	
	if(media <= 5)
		conceito = 'E';
	else if(media <= 6)
			conceito = 'D';
		else if(media <= 7)
				conceito = 'C';
			else if(media <= 8)
					conceito = 'B';
				else conceito = 'A';
	
	
	printf("%f %c",media, conceito);
	return (0);
}



