#include <stdio.h>
#include <stdlib.h>
#define DIMMAX 50

int main()
{

    FILE *fp;
    float *v;
    int n, k;

    fp = fopen("verifica.dat", "r");

    v = (float *) malloc (DIMMAX * sizeof(int) );

    if(fp == NULL){
        printf("file inesistente.\n");
    }else{
        k = 0;

        while(k < DIMMAX && fscanf("fp", v + k) != EOF){
            fscanf(fp, "%f", v + k);
            k++;
        }
    }

    n = k;

    for(k = 0; k < n; k++){
        printf("%d | ", *(v + k));
    }


    system("pause");
    return 0;
}
