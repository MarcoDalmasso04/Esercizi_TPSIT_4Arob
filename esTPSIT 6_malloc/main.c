#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG 50

bool verificoPalindromo(char * s) {
    int k, n, j;
    bool ok = true;

    n = strlen(s);
    j = n - 1;
    k = 0;

    while(ok == true && k < n/2){
        if(*(s + k) != *(s + j)){
            ok = false;
        }
        k++;
        j--;
    }

    return ok;
}

int main() {

    bool ok;

    char * s = (char *) malloc (LUNG * sizeof(char));

    printf("Inserisci una parola: ");
    scanf("%s", s);

    ok = verificoPalindromo(s);

    if(ok == true) {
        printf("%s e' una parola palindroma.\n", s);
    } else {
        printf("%s non e' una parola palindroma.\n", s);
    }

    free(s);
    system("pause");
    return 0;
}
