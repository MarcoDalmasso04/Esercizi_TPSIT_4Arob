#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    char *b;

    a = (int *) malloc (sizeof(int));

    b = (char *) malloc (sizeof(char));

    printf("Inserisci un valore intero: ");
    scanf("%d", a);

    printf("Inserisci un carattere: ");
    fflush(stdin);
    scanf("%c", b);

    printf("\nIndirizzo variabile a --> %d\n", a);
    printf("Valore cella puntata dalla variabile a --> %d\n", *a);

    printf("\n");

    printf("Indirizzo variabile b --> %d\n", b);
    printf("Valore cella puntata dalla variabile b --> %c\n", *b);

    free(a);
    free(b);

    system("pause");
    return 0;
}
