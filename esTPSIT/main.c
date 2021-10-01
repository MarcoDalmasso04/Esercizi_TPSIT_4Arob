#include <stdio.h>
#include <stdlib.h>
#define NSTUDENTI 3
#define LUNG 20

/*
ESERCIZIO 1: Inserimento ordinato

Si scriva un programma che:

-Definisca un tipo di dato STUDENTE. Ogni studente è caratterizzato da un nome, cognme e una matricola.

-Acqusisca i dati di 10 studenti e, per ogni nuovo studente inserito, proceda ad un inserimento ordinato (lo scopo dell'esercizio è
 ordinare gli studenti durante il processo di inserimento e non dopo con un algoritmo di ordinamento

-Stampi i dati degli studenti.
*/

typedef struct{

    char nome[LUNG];
    char cognome[LUNG];
    int matricola;

}Studente;

void inserimento(Studente v[], int n){

    int k;

    for(k = 0; k < n; k++){
        printf("Inserisci nome studente: ");
        scanf("%s", v[k].nome);

        printf("Inserisci cognome studente: ");
        scanf("%s", v[k].cognome);

        printf("Inserisci numero matricola studente: ");
        scanf("%d", &v[k].matricola);

        printf("\n");
    }
}

void stampa(Studente v[], int n){
    int k;

    for(k = 0; k < n; k++){

        printf("Studente numero --> %d.\n", k);

        printf("Nome studente: %s.\n", v[k].nome);
        printf("Cognome studente: %s.\n", v[k].cognome);
        printf("Numero matricola studente: %d.\n", v[k].matricola);

        printf("\n");
    }
}

int main()
{
    Studente v[NSTUDENTI];

    inserimento(v, NSTUDENTI);

    stampa(v, NSTUDENTI);

    system("pause");
    return 0;
}
