#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>

typedef int StackEntry;
typedef struct stack {
    StackEntry *elements;
    int size;
    int top;
} Stack;

Stack* stack_create(int stack_size);
int stack_pop(Stack *stack, StackEntry *item);
int stack_push(Stack *stack, StackEntry item);
int stack_top(Stack *stack, StackEntry *item);
bool stack_is_empty(Stack *stack);
bool stack_is_full(Stack *stack);
void stack_destroy(Stack *stack);
#define STACK_OK 0
#define STACK_ERROR_EMPTY -1
#define STACK_ERROR_FULL -2

#endif