#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define DIM 30
#define D 40

typedef struct{
    int num;
    char titFilm[D];
    char genere[D];
    int annoUscita;
    char dispo[D];
} Cinema;

int caricaVett(Cinema v[], char nomeFile[]) {
    FILE *fp;
    int i = 0;
    char line[100];
    char* pezzo;

    fp = fopen(nomeFile, "r");

    while(fgets(line, 100, fp)) {
        pezzo = strtok(line, ",");
        (v + i)->num = atoi(pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->titFilm, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->genere, pezzo);

        pezzo = strtok(NULL, ",");
        (v + i)->annoUscita = atoi(pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->dispo, pezzo);

        i++;
    }
    fclose(fp);

    return i;
}

void stampVett(Cinema v[], int n) {
    for(int k = 0; k < n; k++) {
        printf("%d\t%35s\t%15s\t%7d\t%15s", (v + k)->num, (v + k)->titFilm, (v + k)->genere, (v + k)->annoUscita, (v + k)->dispo);
    }
}

int main() {

    Cinema *film;
    int n;

    while()

    film = (Cinema*)malloc(n * sizeof(Cinema));

    n = caricaVett(film, "listaFilm.csv");
    stampVett(film, n);

    free(film);
    return 0;
}
