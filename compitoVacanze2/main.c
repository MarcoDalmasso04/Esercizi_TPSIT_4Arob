#include <stdio.h>
#include <stdlib.h>
#define DIM 10

/*
Considerate una sequenza di interi letti da input e definite una funzione C che li
stampa
in modo tale che tutti i pari precedano i dispari, nello stesso ordine in cui vengono
letti.
Ad esempio, se la sequenza è:
1 , 20 , 35 , 40 , 62 , 51 , 66
La stampa che si vuole ottenere e&#39;
20 , 40 , 62 , 66 , 1 , 35 , 51
*/

int testa;


void InserisciElemento(int v[], int *n){
    int k;

    printf("Quanti elementi vuoi inseire? ");
    scanf("%d", n);

    for(k = 0; k < *n; k++){
        printf("Inserisici elemento: ");
        scanf("%d", &v[k]);
    }
}

void OrdinaVettore(int v[], int n){
    int k, p = 0, d = 0;
    int pari[p];
    int dispari[d];

    for(k = 0; k < n; k++){
        if(v[k] % 2 == 0){
            pari[p] = v[k];
            p++;
        }else{
            dispari[d];
            d++;
        }
    }

    for(k = 0; k < p; k++){
        v[k] = pari[k];
    }

    for(k = 0; k < d; k++){
        v[p] = dispari[k];
        p++;
    }
}

void Push(int Pila[], int v[], int n) {

	if(testa == n){
       printf("\n -> Pila piena" );
	}else {
        Pila[testa++] = v[testa];
	}
}

void Print(int Pila[], int n) {
	int i;

	if(testa == 0){
       printf("\n -> Pila vuota" );
	}else{
        for(i = 0; i < n; i++){
           printf("indice i: %d elemento %d\n", i, Pila[i]);
        }

	}
}

int main()
{
    int v[DIM];
    int n;
	int Pila[DIM];

    InserisciElemento(v, &n);
    OrdinaVettore(v, n);
    Push(Pila, v, n);
    Print(Pila, n);

    system("pause");
    return 0;
}
