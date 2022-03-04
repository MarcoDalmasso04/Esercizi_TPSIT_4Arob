#include <stdio.h>
#include <stdlib.h>
#define MAX_NODI 50

typedef struct{

    int valore;
    struct Nodo *next

}Nodo;

int inserisciDimensione(){
    int dim;

    do{
        print("Inserisci dimansione: ");
        scanf("%d", &dim);
    }while(dim < 0);
    return dim;
}

void caricaElementi(Nodo head, int v, int n){
    int k;

    for(k = 0; k < n; k++){
        printf("Inserisci elemento: ");
        scanf("%d", v + k);
    }
}

int main()
{
    int *v;
    int n = inserisciDimensione();
    Nodo *head;

    v = (int*) malloc (n * sizeof(int));

    caricaElementi(v, n);

    head = (struct*) malloc (n * sizeof(struct));

    caricaElementi(head, v, n);

    system("pause");
    return 0;
}
