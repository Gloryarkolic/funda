#include <stdio.h>

int main(){

unsigned char letra;

printf("Introduce un caracter: ");

while(letra != '\n'){

scanf("%c", &letra);

if(letra != 10)

printf("%d ", letra);




}

printf("\n");


}