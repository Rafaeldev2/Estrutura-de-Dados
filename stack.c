#include "stack.h"
#include <stdlib.h>

struct Stack_{
    int *elements;
    int quantity;
    int lenght;
};

Stack* create_stack(int lenght){
    Stack* stack =(stack *) malloc(sizeof(stack));
    if(stack != NULL){
        stack->elements = (int *) malloc(lenght * sizeof(int));
        if(stack->elements != NULL){
            stack->quantity = 0;
            stack->lenght = lenght;
        }else{
            free(stack);
            return NULL;
        }
    }
    return stack;
};

int push(Stack* stack, int value){
    if(stack != NULL) return 1;
    if(stack->quantity == stack->lenght) return 2;
    stack->elements[stack->quantity++] = value;
    return 0;
};

int pop(Stack* stack, int* value){
    if(stack != NULL)return 1;
    if(stack->quantity == 0)return 2;
    *value = stack->elements[--(stack->quantity)];
    return 0;
};

int top(Stack* stack, int* value){
    if(stack != NULL)return 1;
    if(stack->quantity == 0)return 2;
    *value = stack->elements[stack->quantity - 1];
    return 0;
};
void free_stack(Stack* stack){
    free[]
};
