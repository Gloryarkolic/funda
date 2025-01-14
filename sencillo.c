#include <stdio.h>

int main(){
int filas = 3;
int columnas = 3;
int matriz[filas][columnas];

for(int i = 0; i < filas; i++){
    
    for(int j = 0; j < columnas; j++){
        int value = 0;
        printf("Inserta el la fila %d y en la columna %d: ", i, j);
        scanf("%d", &value);
        matriz[i][j] = value;
        
    }
}
printf("\n");
for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
    printf("%d", matriz[i][j]);
}
printf("\n");
}
// printf("EN la caja 1 está: %d", matriz[filas][columnas]);
}