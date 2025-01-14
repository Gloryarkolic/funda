#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

int main(){

srand(time(NULL));
int aleatorio;
char oculta[32];
int acertado = 0;
char letra;
int vida = 6;

char palabras[7][32] = {"marco", "alejandro", "aaron", "oscar", "marina", "osmany", "antonio"};

aleatorio = rand() % 7; 

strcpy(oculta, palabras[aleatorio]);

printf("%s\n", oculta);

char txt[strlen(oculta) + 1];
for(int i = 0; i < strlen(oculta); i++)
    txt[i] = '-';
txt[strlen(oculta)] = '\0';



do{
    printf("%s\n", txt);
    printf("Letra? ");
    letra =getchar();
} while(acertado == 0 && vida > 0);





}


//falta compararlo con oculta y si coincide llevar al arrays de txt y si no se acierta se quita una vida