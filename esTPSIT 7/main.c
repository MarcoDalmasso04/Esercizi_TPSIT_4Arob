#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100
/*
Scrivere un programma che chieda n valori
interi (massimo 100), li collochi in un vettore e inverta il vettore
(scambiando il primo elemento con l'ultimo, il secondo con il penultimo, etc.).
Si usi i puntatori.
*/

int chidiDim(int dimMax){

    int dim;

    do{
        printf("Inserisci dimensione vettore: ");
        scanf("%d", &dim);
    }while(dim < 0 || dim > dimMax);
    return dim;
}
void leggiVettore(int v[], int n){

    int k;

    for(k = 0; k < n; k++){
        printf("Inserisci elemento [%d]: ", k + 1);
        scanf("%d", (v + k));
    }
}

void inverti(int v[], int n){

    int k, temp;
    int j = n - 1;

    for(k = 0; k < n / 2; k++){
        temp = *(v + k);
        *(v + k) = *(v + j);
        *(v + j) = temp;
        j--;
    }
}

void visualizzoVettore(int v[], int n){

    int k;

    for(k = 0; k < n; k++){
        printf("%d | ", *(v + k));
    }
    printf("\n");
}
int main()
{

    int v[DIM_MAX];
    int n;

    n = chidiDim(DIM_MAX);

    leggiVettore(v, n); //leggo il vettore

    visualizzoVettore(v, n); //lo stampo per ricordare l'ordine di inserimento

    inverti(v, n); //lo inverto

    visualizzoVettore(v, n); //lo visualizzo invertito

    system("pause");
    return 0;
}
