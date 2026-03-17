#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head,*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert:");
    scanf("%d", &newnode -> data);
    newnode -> next = head;
    head = newnode;
}