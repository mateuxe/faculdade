#include<stdio.h>

int main(){
	int n, milhares, centenas, dezenas, unidades, ordem, resto;
	//ler n
	scanf("%d", &n);
	if(n> 9999 || n<=0){
		printf("Numero invalido!\n");
		return(0);
	}	
	//Separar n em milhares, centenas, dezenas e unidades
	milhares=n/1000;
	resto=n%1000;
	centenas=resto/100;
	resto=resto%100;
	dezenas=resto/10;
	unidades=resto%10;
	ordem=0;
	//descobrir a ordem de n
	if(milhares!=0){
		ordem=4;
		printf("(quarta ordem) %d = ", n);
		if(milhares >1){
			printf("%d unidades de milhar ",milhares);
		}
		else{
			printf("%d unidade de milhar ",milhares);
		}
	}
	if(centenas!=0){
		if(ordem==0){
			ordem=3;
			printf("(terceira ordem) %d = ", n);
		}
		else{
			printf("+ ");	
		}
		if(centenas>1){
			printf("%d centenas ",centenas);
		}
		else{
			printf("%d centena ",centenas);
		}
	}
	if(dezenas!=0){
		if(ordem==0){
			ordem=2;
			printf("(segunda ordem) %d = ", n);
		}
		else{
			printf("+ ");
		}
		if(dezenas>1){
			printf("%d dezenas ",dezenas);
		}
		else{
			printf("%d dezena ",dezenas);
		}
	}
	if(unidades!=0){
		if(ordem==0){
			ordem=1;
			printf("(primeira ordem) %d = ", n);
		}
		else{
			printf("+ ");
		}
		if(unidades>1){
			printf("%d unidades ",unidades);
		}
		else{
			printf("%d unidade ",unidades);
		}
	}
	printf("= ");
	switch(ordem){
	case 4:
			printf("%d ", milhares*1000);
			if (centenas!=0){
				printf(" + %d", centenas*100);
			}
			if( dezenas!=0){
				printf(" + %d", dezenas*10);
			}
			if( unidades!=0){
				printf(" + %d", unidades);
			}
			printf("\n");
			break;
	case 3:	
			printf("%d ", centenas*100);
			if( dezenas!=0){
				printf(" + %d", dezenas*10);
			}
			if( unidades!=0){
				printf(" + %d", unidades);
			}
			printf("\n");
			break;
	case 2:
			printf("%d ", dezenas*10);
			if( unidades!=0){
				printf(" + %d", unidades);
			}
			printf("\n");
			break;
	case 1:
			printf (" %d\n", unidades);
				
	}
		
}