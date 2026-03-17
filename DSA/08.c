#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){

    struct node *head = 0, *newnode, *temp;
    int choice = 1;

    while(choice){

        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data you want to insert: ");
        scanf("%d",&newnode->data);

        newnode->next = head;
        head = newnode;

        printf("Enter choice (1 to continue, 0 to stop): ");
        scanf("%d",&choice);
    }

    temp = head;

    printf("Linked List:\n");

    while(temp != 0){
        printf("%d\n",temp->data);
        temp = temp->next;
    }

    return 0;
}