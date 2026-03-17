#include <stdio.h>

#define MAX 5

struct Stack {
    int arr [MAX];
    int top;
};

void initStack(struct Stack* s){
    s ->top = -1;
}
int isEmpty(struct Stack* s){
    return s ->top == MAX -1;

}
int isFull(struct Stack* s){
    return s ->top == MAX -1;
}
