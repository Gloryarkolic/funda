#include <stdio.h>
#include <ctype.h>

int main(){
    char car;
    int digitos = 0;
    int mays = 0;
    int mins = 0;
    int punt;
    printf("Password? ");

    do{
        car = getchar();
        if(isupper(car))
        mays++;
        else if(islower(car))
        mins++;
        else if(isdigit(car))
        digitos++;
        else if(ispunct(car))
        punt++;
    

    } while (car != '\n');

    if(digitos + mins + mays + punt <= 8)
        printf("Contraseña demasiado corta\n");
    else if(digitos == 0)
        printf("Debe incluir un numero\n");
    else if(punt == 0)
        printf("debe incluir un simbolo de puntuacion\n");
    else if(mays == 0|| mins == 0)
        printf("debe tener mays y mins\n");
    else
    printf("contraseña correcta \n");
}