#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG 20

/*
Scrivere
un programma che data una stringa in input dica se la stessa contiene almeno
una ‘A’ tra i primi 10 caratteri.
*/

bool verifico(char *s[]){

    int k, n;
    bool ok = false;

    n = strlen(*s);
    k = 0;

    while(ok == false && k < 10){
       if(*(s + k) == 'A' || *(s + k) == 'a'){
            ok = true;
        }
        k++;
    }
    return ok;
}

int main()
{
    char *s;
    bool ok;

    *s = (char*) malloc (LUNG * sizeof(char));

    printf("Insersci una parola: ");
    scanf("%s", s);
    fflush(stdin);

    ok = verifico(*s);

    if(ok == true){
        printf("Nella stringa e' presente almeno una A tra i primi 10 caratteri.\n");
    }else{
        printf("Nella stringa non e' presente una A tra i primi 10 caratteri.\n");
    }

    free(s);
    system("pause");
    return 0;
}
