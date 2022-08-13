// by @codeAbinash

typedef struct {
    int *stack;
    int front;
} MyStack;

MyStack *myStackCreate() {
    MyStack *stack = (MyStack *)malloc(sizeof(MyStack));
    stack->stack = (int *)calloc(100, sizeof(int));
    stack->front = -1;
    return stack;
}

void myStackPush(MyStack *stack, int x) {
    stack->front++;
    stack->stack[stack->front] = x;
}

int myStackPop(MyStack *stack) {
    int y = stack->stack[stack->front];
    stack->front--;
    return y;
}

int myStackTop(MyStack *stack) {
    int x = stack->stack[stack->front];
    return x;
}

bool myStackEmpty(MyStack *stack) { 
    return (stack->front == -1); 
}

void myStackFree(MyStack *stack) {
    free(stack); 
}