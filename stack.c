#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count;

STACK createStack(int stackCapacity) {
    STACK stack;

    stack.maxCapacity = stackCapacity;
    stack.top = NULL;
    stack.bottom = NULL;

    return stack;
}

NodeT *createNode(int givenData) {
    NodeT *node = malloc(sizeof(NodeT));

    if (node == NULL) {
        printf("Couldn't allocate memory!");
        return NULL;
    }

    node->data = givenData;
    node->next = NULL;

    return node;
}

void Push(STACK *stack, int givenData) {
    NodeT *node = createNode(givenData);

    if (stack->top == NULL) {
        stack->bottom = node;
        stack->top = node;
        count++;
        return;
    }

    if (count < stack->maxCapacity) {
        node->next = stack->top;
        stack->top = node;
        count++;
    } else {
        printf("Can't exceed capacity!\n");
        return;
    }
}

void printStack(STACK stack) {
    if (stack.top != NULL) {
        NodeT *current = stack.top;

        while (current != NULL) {
            printf("%d\n", current->data);
            current = current->next;
        }
    }
}

void Pop(STACK *stack) {
    if (stack->top == NULL) {
        printf("There aren't elements to be deleted!\n");
        return;
    }

    NodeT *current = stack->top;

    stack->top = stack->top->next;
    if (count > 0)
        count--;
    free(current);

    if (stack->top == NULL) {
        stack->bottom = NULL;
    }
}

void getStackCapacity() {
    printf("The stack's capacity is %d\n", count);
}

bool isEmpty() {
    bool is;

    if (count == 0)
        is = true;
    else
        is = false;
}

void deleteStack(STACK *stack) {
    NodeT *current = stack->top;
    NodeT *previous = NULL;

    if (stack->top != NULL) {
        while (current != NULL) {
            previous = current;
            current = current->next;
            free(previous);
        }

        count = 0;
        stack->top = NULL;
        stack->bottom = NULL;

        printf("The stack is now empty!\n");
    }
}

