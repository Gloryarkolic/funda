#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ALTO 3
#define ANCHO 3
void rellenarMatriz(int f, int c, int m[][c]);
void escribirMatriz(int f, int c, int m[][c]);
int main()
{
    int m[ALTO][ANCHO];
    rellenarMatriz(ALTO, ANCHO, m);
    escribirMatriz(ALTO, ANCHO, m);
    int noNulo = 0;
    for (int i = 0; i < ALTO; i++)
        for (int j = 0; j < ANCHO; j++)
            if (m[i][j] != 0)
                noNulo++;
    int nueva[noNulo + 1][3];
    nueva[noNulo][0] = ALTO;
    nueva[noNulo][1] = ANCHO;
    nueva[noNulo][2] = -1;
    int filaActual = 0;
    for (int i = 0; i < ALTO; i++)
    {
        for (int j = 0; j < ANCHO; j++)
        {
            if (m[j][i] != 0)
            {
                nueva[filaActual][0] = i;
                nueva[filaActual][1] = j;
                nueva[filaActual][2] = m[j][i];
                filaActual++;
            }
        }
    }
    printf("\n");
    escribirMatriz(noNulo + 1, 3, nueva);
}
void rellenarMatriz(int f, int c, int m[][c])
{
    int fAleat, cAleat, vAleat;
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            m[i][j] = 0;
    int nValores = f * c;
    nValores = (nValores * 50) / 100;
    srand(time(NULL));
    for (int v = 1; v <= nValores; v++)
    {
        fAleat = rand() % f;
        cAleat = rand() % c;
        vAleat = 1 + rand() % 100;
        m[fAleat][cAleat] = vAleat;
    }
}
void escribirMatriz(int f, int c, int m[][c])
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}