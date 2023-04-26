#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3

// Function to create an empty stack
int* createStack() {
    int *stack = (int*) malloc(MAX_SIZE * sizeof(int));
    return stack;
}

// Check if the stack is empty
int isEmpty(int top) {
    return (top == -1);
}

// Check if the stack is full
int isFull(int top) {
    return (top == MAX_SIZE - 1);
}

// Function to push an element to the stack
void push(int *stack, int *top, int item) {
    if (isFull(*top)) {
        printf("Stack is full!\n");
        return;
    }
    stack[++(*top)] = item;
}

// Function to pop an element from the stack
int pop(int *stack, int *top) {
    if (isEmpty(*top)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[(*top)--];
}

int main() {
    int *stack = createStack();
    int top = -1;
    printf("Stack size: %d",MAX_SIZE);
    push(stack, &top, 1);
    push(stack, &top, 2);
    push(stack, &top, 3);
    printf("\nOriginal Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    } 
    printf("\nPush another value and check if the stack is full or not!\n");
    push(stack, &top, 4);    
    free(stack);
   //-------------------------------------------
    int *stack1 = createStack();
    int top1 = -1, result;
    printf("\nStack size: %d",MAX_SIZE);
    push(stack1, &top1, 10);
    push(stack1, &top1, 20);
    printf("\nOriginal Stack: ");
    for (int i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    } 
    printf("\nCheck the said stack is full or not!\n");
    result = isFull(top1);
    if (result==1)
       printf("Stack is full!");
    else
       printf("Stack is not full!");
    free(stack1);
    return 0;
}
