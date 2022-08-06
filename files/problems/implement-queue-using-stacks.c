typedef struct {
    int stack1[100], stack2[100];
    int index1, index2;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* newQ = (MyQueue*)malloc(sizeof(MyQueue));
    newQ->index1 = newQ->index2 = -1;
    return newQ;
}
void myQueuePush(MyQueue* obj, int x) { obj->stack1[++(obj->index1)] = x; }

int myQueuePop(MyQueue* obj) {
    if (obj->index2 >= 0) {
        obj->index2--;
        return obj->stack2[obj->index2 + 1];
    } else {
        int len = obj->index1;
        for (int i = 0; i < len + 1; i++)
            obj->stack2[++(obj->index2)] = obj->stack1[obj->index1 - i];
        obj->index1 = -1;
        obj->index2--;
        return obj->stack2[obj->index2 + 1];
    }
}

int myQueuePeek(MyQueue* obj) {
    if (obj->index2 >= 0) return obj->stack2[obj->index2];
    return obj->stack1[0];
}

bool myQueueEmpty(MyQueue* obj) {
    return !(obj->index1 >= 0 || obj->index2 >= 0);
}

void myQueueFree(MyQueue* obj) { free(obj); }