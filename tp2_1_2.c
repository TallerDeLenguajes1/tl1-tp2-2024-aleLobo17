// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#define N 20


int main(){
    int i;
    double vt[N];
    double *puntero;
    puntero = vt; 
    for(i = 0;i<N; i++)
    {
    *puntero = 1+rand()%100;
    printf("\n%f", *puntero);
    
    }
    printf("\n");

    return 0;
}