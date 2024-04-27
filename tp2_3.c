
#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(){
    int mt[N][M];
    int *puntero;
    puntero = mt;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *puntero = 1+rand()%100;
            //printf("%d ", *puntero);
            puntero++;
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", mt[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}