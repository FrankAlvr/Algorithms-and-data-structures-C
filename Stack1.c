#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int*    arr;
    uint8_t cap;
    uint8_t location; //Cuantos elementos hay actualmente

}stack;

void stack_init(stack* stack1, int cap){
    int* aux;
    aux = calloc(cap,sizeof(int));
    if (aux == NULL) return;
    stack1->arr         = aux; 
    stack1->cap         = cap;
    stack1->location    = 0; 
    
    return;
}

void stack_push(stack* stack1,int dato){
    if (stack1->location == stack1->cap) return;
    stack1->arr[stack1->location] = dato;
    stack1->location++;
}

int stack_pop(stack* stack1){
    if (stack1->location == 0) return -1;
    return stack1->arr[--stack1->location];
}

int stack_peek(stack* stack1){
    if (stack1->location == 0) return -1;
    return stack1->arr[stack1->location-1];
}
void stack_print(stack* stack1){
    if (stack1->location == 0) return;
    int aux = stack1->location-1;
    while(aux >= 0){
        printf("Number: %d, Value: %d\n", aux,stack1->arr[aux]);
        --aux;
    }
    return;
}

int main(){
    stack stack1;
    stack_init(&stack1,5);
    stack_push(&stack1,20);
    stack_push(&stack1,35);
    stack_push(&stack1,98);
    stack_push(&stack1,11);
    stack_push(&stack1,106);
    stack_print(&stack1);
    stack_pop(&stack1);
    stack_pop(&stack1);
    stack_pop(&stack1);
    stack_print(&stack1);

    return 0;
}