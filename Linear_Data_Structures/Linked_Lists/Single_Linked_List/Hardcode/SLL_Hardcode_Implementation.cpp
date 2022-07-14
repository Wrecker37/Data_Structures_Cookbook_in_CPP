
#include <iostream>
#include <stdlib.h>


struct node{
    int data;
    struct node *link;

};

void node_count(struct node *head){
    int count{};

    if(head == NULL)
        printf("Linked list is empty");

    struct node *ptr = nullptr;
    ptr = head;

    while(ptr != NULL){
        count ++;
        ptr = ptr->link;
    }

    printf("node count: %d",count);

};

void node_print(struct node *head){
    if(head == NULL)
        printf("Linked list is empty");
    struct node *ptr = nullptr;
    ptr = head;

    while(ptr != NULL){
        printf("%d, ",ptr->data);
        ptr = ptr->link;
    }
};

int main(){
    //creating a Linked List with 3 nodes
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data  = 100;
    head->link = nullptr;


    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 200;
    current->link = nullptr;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 300;
    current->link = nullptr;
    head->link->link = current;

    node_print(head);
    node_count(head);
    


    return 0;


}