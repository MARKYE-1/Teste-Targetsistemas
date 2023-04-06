#include<stdio.h>
#include<string.h>
main(){
	
	char a[] = "me-contrata";
	
	printf("%s", a); 
	
	int b = strlen(a);
	
	char c[b]; //criando variavel para receber a palavra
	
	for(int i = 0; i<b; i++){
		
		c[i]= a[i];	//atribuindo a palavra
	}
	
	
	for(int i = 0; i<b; i++){
		
		a[i] = c[b-i-1]; //invertendo e repassando de volta para a variavel principal
		
	}
	
	printf("\n");
	
	printf("%s",a);
	
}
