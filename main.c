#include <stdio.h>
#include "stack.h"

int main() {
    STACK stack;

    stack = createStack(5);

    Push(&stack, 1);
    Push(&stack, 2);
    Push(&stack, 3);
    Push(&stack, 4);
    Push(&stack, 5);
    Push(&stack, 6);
    Push(&stack, 7);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 1);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 2);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 3);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 4);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 5);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 6);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");


    deleteStack(&stack);
    getStackCapacity();
    printf("\n");

    Push(&stack, 1);
    Push(&stack, 2);
    Push(&stack, 3);
    Push(&stack, 4);
    Push(&stack, 5);
    Push(&stack, 6);
    Push(&stack, 7);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Pop(&stack);
    if (!isEmpty())
        printf("The stack is empty!\n");
    else
        printf("The stack isn't empty!\n");
    printf("\n");
    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");


    Push(&stack, 1);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");
    if (!isEmpty())
        printf("The stack is empty!\n");
    else
        printf("The stack isn't empty!\n");
    printf("\n");

    Push(&stack, 2);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 3);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 4);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 5);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");

    Push(&stack, 6);

    printStack(stack);
    printf("\n");
    getStackCapacity();
    printf("\n");


    return 0;
}
