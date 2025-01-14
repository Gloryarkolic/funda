#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirMatriz(int filas, c, arra);




int main(){
	srand(time(NULL));

	int tam;
	int suma = 0;
	int max = 0;
	int contador = 0;

	int valores[37];

	for(int i = 0; i < 37; i++)
		valores[i] = 0;

	int numerosiguiente[37][37];
	for(int f = 0; f < 37; f++)
		for(int c = 0; c < 37; c++)
		numerosiguiente[f][c] = 0;

	printf("Numero jugadas? ");
	scanf("%d", &tam);

	int v[tam];

	for(int i = 0; i < tam; i++){
		v[i] = rand() % 37;
	}

	printf("[");
	for(int i = 0; i < tam; i++){
		if(i != tam - 1)
			printf("%d, ", v[i]);
		else
			printf("%d", v[i]);
	}

	printf("]");

	for(int i = 0; i < tam; i++)
		suma += v[i];

	printf("Suma = %d\n", suma);

	for(int i = 0; i < tam; i++){
		if(v[i] > max){
			max = v[i];
			contador = 1;
		} else if (v[i] == max)
			contador++;
	}


	printf("Maximo = %d\n", max);
	printf("Veces = %d\n", contador);


	for(int i = 0; i < tam; i++)
		valores[v[i]]++;


	for(int i = 0; i < 37; i++)
		printf("%d\t%d\t%.2f\n", i, valores[i], ((float)valores[i]/tam) * 100);








	
}