#include <stdio.h>
#include <stdlib.h>
#define DIM 5

void caricaVettore(int v[]){
    int k;

    for(k = 0; k < DIM; k++){
        printf("Inserisci elemento: ");
        scanf("%d", v+k);
    }
}

void ordina(int v[]){
    int k;
    int sup;
    int temp;

    for(sup = DIM - 1; sup > 0; sup--){
        for(k = 0; k < DIM; k++){
           if(*(v+k) > *(v+k+1)){
                temp = *(v+k+1);
                *(v+k+1) = *(v+k);
                *(v+k) = temp;
           }
        }
    }
}

void stampa(int v[]){
    int k;

    for(k = 0; k < DIM; k++){
        printf("%d | ", *(v+k));
    }
}
int main()
{
    int v[DIM];

    caricaVettore(v);
    ordina(v);
    stampa(v);

    printf("\n");
    system("pause");
    return 0;
}
