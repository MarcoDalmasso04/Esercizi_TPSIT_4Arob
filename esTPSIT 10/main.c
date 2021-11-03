#include <stdio.h>
#include <stdlib.h>
#define NR_MAX 50
#define NC_MAX 50

void chiediDimensioni(int *nR, int *nC){

    do{
        printf("Inserisci numero di colonne: ");
        scanf("%d", nC);

        printf("Inserisci numero di righe: ");
        scanf("%d", nR);

    }while(*nC < 0 || *nC > NC_MAX && *nR < 0 || *nR > NR_MAX);
}

int main()
{
    float **m;
    int k, r, c, nR, nC;

    chiediDimensioni(&nR, &nC);

    m = (float**) malloc (nR * sizeof(float*));

    for(k = 0; k < nC; k++){
        *(m + k) = malloc (nC * sizeof(float));
    }

    for(r = 0; r < nR; r++){
        for(c = 0; c < nC; c++){
            *((m + r) + c) = 0;
        }
    }

    for(r = 0; r < nR; r++){
        for(c = 0; c < nC; c++){
            printf("%.2f ", *((m + r) + c));
        }
        printf("\n");
    }

    free(m);
    system("pause");
    return 0;
}
