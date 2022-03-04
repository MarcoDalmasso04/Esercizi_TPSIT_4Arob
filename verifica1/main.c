#include <stdio.h>
#include <stdlib.h>

int main()
{
    float **mat; //matrice
    int nR, nC, k;
    float *v;
    int max, r, c, n;

    printf("Inserisci numero righe: ");
    scanf("%d", &nR);

    printf("Inserisci numero colonne: ");
    scanf("%d", &nC);

    mat = (float **) malloc (nR * sizeof(int*)); //alloco numero di righe

    for(k = 0; k < nR; k++){
        mat[k] = (float *) malloc (nC * sizeof(int)); // per ogni rigna alloco il numero di elementi
    }

    for(r = 0; r < nR; r++){
        for(c = 0; c < nC; c++){
            printf("Inserisci valore: ");
            scanf("%f", &mat[r][c]); //inserisci i valori
        }
    }

    for(r = 0; r < nR; r++){
        for(c = 0; c < nC; c++){
            printf("%.2f | ", mat[r][c]); // la stampo per riscordarmi i valori inseriti
        }
        printf("\n");
    }

    v = (float *) malloc (nR * sizeof(int)); // aloco dinamicamente il vettore per il numero di righe

    for(r = 0; r < nR; r++){
        max = 0;
        for(c = 0; c < nC; c++){
            if(mat[r][c] > max){//tro il maggiore per la riga r
                max = mat[r][c];
            }
        }
        *(v + r) = max;//assegno al vettore in posizione r il max trovato
    }
    n = r;

    for(k = 0; k < n; k++){
        printf("%.2f | ", *(v + k)); //stampo il vettore con i massimi per ogni riga
    }

    printf("\n");
    free(mat); //disalloco la matrice
    free(v);//disalloco il vettore
    system("pause");
    return 0;
}
