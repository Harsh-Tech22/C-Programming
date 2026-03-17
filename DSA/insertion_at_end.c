#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    int choice = 1;
    struct node *head = 0, *temp, *newnode;

    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Data you want to insert: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if(head == 0){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

        printf("You want to continue (0/1): ");
        scanf("%d", &choice);
    }

    temp = head;
    printf("Final list:\n");

    while(temp != 0){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
