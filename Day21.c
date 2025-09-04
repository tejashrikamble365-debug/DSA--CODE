#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct {
    int arr[MAX];
    int top;
} Stack;
void init(Stack* s) {
    s->top = -1;
}
int isEmpty(Stack* s) {
    return s->top == -1;
}
int isFull(Stack* s) {
    return s->top == MAX - 1;
}
void push(Stack* s, int val) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++(s->top)] = val;
}
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->arr[(s->top)--];
}
int peek(Stack* s) {
    if (isEmpty(s)) {
        return -1;
    }
    return s->arr[s->top];
}
void insertAtBottom(Stack* s, int val) {
    if (isEmpty(s)) {
        push(s, val);
        return;
    }
    int temp = pop(s);
    insertAtBottom(s, val);
    push(s, temp);
}
void reverseStack(Stack* s) {
    if (!isEmpty(s)) {
        int temp = pop(s);
        reverseStack(s);
        insertAtBottom(s, temp);
    }
}
void printStack(Stack* s) {
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}
int main() {
    Stack s;
    init(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    printf("Original Stack: ");
    printStack(&s);
    reverseStack(&s);
    printf("Reversed Stack: ");
    printStack(&s);
    return 0;
}
