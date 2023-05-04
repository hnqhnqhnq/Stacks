#pragma once

#include <stdbool.h>

typedef struct NodeT {
    int data;
    struct NodeT *next;
} NodeT;

typedef struct STACK {
    struct NodeT *bottom;
    struct NodeT *top;
    int maxCapacity;
} STACK;

STACK createStack(int stackCapacity);

NodeT *createNode(int givenData);

void Push(STACK *stack, int givenData);

void printStack(STACK stack);

void Pop(STACK *stack);

void getStackCapacity();

bool isEmpty();

void deleteStack(STACK *stack);
