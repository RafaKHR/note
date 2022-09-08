#include<stdio.h>
#include<math.h>
int main(){
	float base, expoente, resultado;
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	
	printf("Digite o valor do expoente: ");
	scanf("%f", &expoente);
	
	resultado = pow(base, expoente);
	
	printf("O resultado eh: %f", resultado);
}
