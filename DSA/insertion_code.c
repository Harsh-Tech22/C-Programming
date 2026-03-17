#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){

    struct node *head, *temp;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;

    head->next = (struct node*)malloc(sizeof(struct node));
    head->next->data = 20;

    head->next->next = (struct node*)malloc(sizeof(struct node));
    head->next->next->data = 30;

    head->next->next->next = NULL;

    
    temp = head;    
    head = head->next;
    free(temp);


    temp = head;

    printf("Linked List:\n");

    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }

}