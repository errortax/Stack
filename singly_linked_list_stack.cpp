#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to create a new stack
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

// Function to check if stack is empty
int isEmpty(struct Stack* stack) {
    return !stack->top;
}

// Function to push a value onto the stack
void push_data(struct Stack* stack, int data) {
	printf("\n Push data %d",data);
    struct Node* node = newNode(data);
    node->next = stack->top;
    stack->top = node;
}

// Function to pop a value from the stack
int pop_data(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node* temp = stack->top;
    int popped = temp->data;
    stack->top = temp->next;
    free(temp);
    return popped;
}
int main()
{
struct Stack* stack1 = createStack();
push_data(stack1, 1);
push_data(stack1, 2);
push_data(stack1, 3);
push_data(stack1, 4);
printf("\n\n Pop data: %d", pop_data(stack1));
printf("\n Pop data: %d", pop_data(stack1));
printf("\n Pop data: %d", pop_data(stack1));
printf("\n Pop data: %d", pop_data(stack1));

printf("\n\n Check a stack is empty or not?\n");
struct Stack* stack2 = createStack();
    if (isEmpty(stack2)) {
        printf(" Stack is empty!\n");
    } else {
        printf(" Stack is not empty!\n");
 }
}
