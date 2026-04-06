#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define QUEUE_MAX 8

typedef struct{
    uint8_t datos[QUEUE_MAX];
    int     inicio; //indice del primer elemento
    int     fin;    //índice donde entra el siguiente
    int     count;    //cuántos elementos hay
}Queue_t;

void queue_init(Queue_t *q){
    q   ->  inicio  = 0;
    q   ->  fin     = 0;
    q   ->  count   = 0;
}
//Enqueue - agregar al final
int queue_enqueue(Queue_t *q, uint8_t dato){
    if(q -> count == QUEUE_MAX) return -1;
    q   ->  datos[q->fin]   = dato;
    q   ->  fin             = (q->fin + 1) % QUEUE_MAX;
    q   ->  count++;
    return 0;
}

//Dequeue - sacar del inicio
int queue_dequeue(Queue_t *q, uint8_t *dato){
    if(q -> count == 0) return -1; //vacía
    *dato       =   q->datos[q->inicio];
    q -> inicio   =   (q -> inicio + 1) % QUEUE_MAX; //buffer circular
    q -> count--;
    return 0;
}
int queue_vacia(Queue_t *q) { return q->count == 0; }
int queue_llena(Queue_t *q) { return q->count == QUEUE_MAX; }
