#include <stdio.h>

int main(){
    int tam;

    printf("Tamaño? ");
    scanf("%d",&tam);

    int v[tam];

    for(int i = 0; i < tam; i++){
        printf("Valor en la posición %d? ", i);
        scanf("%d", &v[i]);
    }
    printf("[");
    for(int i = 0; i < tam; i++){
        if(i != tam - 1)
            printf("%d, ", v[i]);
        else 
            printf("%d", v[i]);
    }
    printf("]");
}