#include <stdio.h> 

int main(){
	float nota1,nota2,nota3,media;
	
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	media = (nota1+nota2+nota3)/3;
	
	printf("\n%f ",media);
	
	if(media <= 3)
		printf("Reprovado ");
	else if(media <= 7){
			printf("Exame ");
			printf("%f ",((6*4)-nota1-nota2-nota3));
		}else printf("Aprovado ");
	
	return (0);
}



