#include<stdio.h>

main(){
	
	int a = 0;
	int b = 1;
	int d;
	int c,i;
	int e;
	 
	 
	printf("digite quantos numeros voce deseja na sequencia de Fibonacci: ");
	scanf("%d", &c);
	 
	int fib[c];
	 	 
	for(i=0; i<=c; i++){
	 	
		d = a + b;
	 	
	 	fib[i] = d;
	 	
	 	a = b;
	 	b = d;
	 	
	 	d = 0;	
	 	
	}
	
	a = 0;
	b=0;
	for(i=0; i<=c; i++){
	 	
	 	printf("%d - ",fib[i]);
	}
	
	printf("digite os valor a ser comparado com a lista: ");
	scanf("%d",&e);
	

		for(i=0; i<=c; i++){
			
			if(e == fib[i]){
				printf("O valor inserido e igual ao da lista:");
			}
			
			else{
			
			a++;
			
			}
			b++;	
		}
		
		if(a==b)
		{
			printf("valor nao encontrado");
		}
	
	
	 
	 
}
