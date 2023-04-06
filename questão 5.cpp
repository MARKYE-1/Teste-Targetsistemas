#include<stdio.h>
#include<string.h>
main(){
	
	char a[] = "me-contrata";
	
	printf("%s", a); 
	
	int b = strlen(a);
	
	char c[b];
	
	for(int i = 0; i<b; i++){
		
		c[i]= a[i];	
	}
	
	
	for(int i = 0; i<b; i++){
		
		a[i] = c[b-i-1];
		
	}
	
	printf("\n");
	
	printf("%s",a);
	
}
