#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));
    char mayus;
    char minus;
    char numeros;
    char c; 


for(int i = 1; i <= 8 ; i++ ){

mayus = 65 + rand()% 26;
//minus = 97 + rand()% 26;
//numeros = 48 + rand() % 10;



printf("%c", mayus);


}


// printf("%c", minus);
// printf("%c", numeros);




}