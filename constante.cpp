#include<stdio.h> // printf e scanf
#include<math.h> // realiza calculos
#define PI 3.14159 // constante
int main(){
	float raio, area;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio); // raio é um dado de entrada 
	
	area = PI * pow(raio, 2); // POTENCIA pow(base,expoente)
	area = 3.14159 * pow(raio, 2); 
	area = 3.14159 * raio * raio; // area é um dado de saída
	
	printf("Area: %f", area);
}
