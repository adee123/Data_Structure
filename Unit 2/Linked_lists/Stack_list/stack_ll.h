#ifndef STACK_LL_H
#define STACK_LL_H
#include "C:/Data_Structure/Unit2/Linked_lists/Linked_List/linked_list.h"
#include <stdbool.h>

typedef struct stack {
    Node* head;
} Stack;
Stack* stack_init();
int stack_pop(Stack* stack, int *value);
int stack_push(Stack* stack, int value);
int stack_top(Stack* stack, int *value);
bool stack_is_empty(Stack* stack);
void stack_destroy(Stack* stack);
#define STACK_OK 0
#define STACK_ERROR_EMPTY -1
#endif