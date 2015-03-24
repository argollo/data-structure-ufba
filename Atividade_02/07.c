#include <stdio.h> 

int main(){
	int I;
	float A,B,C;
	
	scanf("%d %f %f %f",&I, &A, &B, &C);
	
	if(I==1){
		if (A < B)                                           
			if (B < C) printf("%4f %4f %4f\n", A, B, C);       
			else                                             
				if (A < C) printf("%4f %4f %4f\n", A, C, B);  
				else printf("%4f %4f %4f\n", C, A, B);         
		else                                                
			if (B < C)                                      
				if (A < C) printf("%4f %4f %4f\n", B, A, C);  
				else printf("%4f %4f %4f\n", B, C, A);         
			else printf("%4f %4f %4f\n", C ,B, A);  
	}else if(I==2){
		if (A > B)                                           
			if (B > C) printf("%4f %4f %4f\n", A, B, C);       
			else                                             
				if (A > C) printf("%4f %4f %4f\n", A, C, B);  
				else printf("%4f %4f %4f\n", C, A, B);         
		else                                                
			if (B > C)                                      
				if (A > C) printf("%4f %4f %4f\n", B, A, C);  
				else printf("%4f %4f %4f\n", B, C, A);         
			else printf("%4f %4f %4f\n", C ,B, A);  
		}else if(I==3){
			if (A < B)                                           
				if (B < C) printf("%4f %4f %4f\n", A, C, B);       
				else                                             
					if (A < C) printf("%4f %4f %4f\n", A, B, C);  
					else printf("%4f %4f %4f\n", C, B, A);         
			else                                                
				if (B < C)                                      
					if (A < C) printf("%4f %4f %4f\n", B,C, A);  
					else printf("%4f %4f %4f\n", B, A, C);         
				else printf("%4f %4f %4f\n", C ,A,B);  
		}
	
	return (0);
}






