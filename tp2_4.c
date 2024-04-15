#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char tipo_cpu; //valores del arreglo tipos
}typedef compu;

void cargarCompu(compu *pc);
void mostrarCompu(compu *pc);
void mostrarCompuMasVieja(compu *pc);
void mostrarCompuMasRapida(compu *pc);
int main(){
    char tipos[6]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu *pc;
    cargarCompu(pc);
    /*char tipo_cpu=tipos;
    tipo_cpu = tipos;*/
    printf("\nMuestro todas las compus: \n");
    mostrarCompu(pc);
    printf("\nMuestro compu mas rapida: \n");
    mostrarCompuMasRapida(pc);
    printf("\nMuestro compu mas vieja: \n");
    mostrarCompuMasVieja(pc);
    return 0;
}

void cargarCompu(compu *pc){
    char tipos[6]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int tipo;
    for (int i = 0; i < 5; i++)
    {
        pc->velocidad= 1 + rand() %4;
        pc->anio= 2015 + rand() %10;
        tipo = rand() %6;
        pc->tipo_cpu = tipos[tipo];
        pc->cantidad = 1 + rand() %9;
        *pc++;
    }
}

void mostrarCompu(compu *pc){
    for (int i = 0; i < 5; i++)
    {
        printf("velocidad: %d\n", (pc + i)->velocidad);
        printf("Año: %d\n", (pc + i)->anio);
        printf("Tipo: %s\n", (pc + i)->tipo_cpu);
        printf("Cantidad: %d\n", (pc + i)->cantidad);
    }  
}

void mostrarCompuMasVieja(compu *pc){
    int anio=2023;
    int j=0;
    for (int i = 0; i < 5; i++)
    {
        if ((pc + i)->anio <= anio)
        {
            anio = (pc + i)->anio;
            j=i;
        } else
        {
            j = j;
        }    
    }  
    printf("velocidad: %d\n", (pc + j)->velocidad);
    printf("Año: %d\n", (pc + j)->anio);
    printf("Tipo: %s\n", (pc + j)->tipo_cpu);
    printf("Cantidad: %d\n", (pc + j)->cantidad);
}
void mostrarCompuMasRapida(compu *pc){
    int velocidad=0;
    int j=0;
    for (int i = 0; i < 5; i++)
    {
        if ((pc + i)->velocidad >= velocidad)
        {
            velocidad = (pc + i)->velocidad;
            j=i;
        }else
        {
            j=j;
        }
        
    }  
    printf("velocidad: %d\n", (pc + j)->velocidad);
    printf("Año: %d\n", (pc + j)->anio);
    printf("Tipo: %s\n", (pc + j)->tipo_cpu);
    printf("Cantidad: %d\n", (pc + j)->cantidad);
}