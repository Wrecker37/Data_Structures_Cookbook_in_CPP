#include "SLL.h"
#include "Node.h"
#include <iostream>

//default constructor
SLL::SLL()
{
    this->head = nullptr;
}

//function to add a new node to the end of the linked list
void SLL::insertNode(int data)
{
    //declaring the new node with the intended data
    Node *newNode = new Node(data);

    //if the head of the linked list is empty then set to new node
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    //declaring placeholder node pointer pointing to the head
    Node *placeholder = head;

    //traverse the entire linked list
    while(placeholder->next != NULL)
    {
        placeholder = placeholder->next;
    }

    //insert new node to the end
    placeholder->next = newNode;

}

//Function to delete a node in the linked list
void SLL::deleteNode(int nodeDelete)
{
    //declaring 2 pleaceholder nodes and a length variable
    Node *placeholder1 = head, *placeholder2 = nullptr;
    int Len = 0;

    //if head ptr is Null then exit
    if(head == NULL)
    {
        std::cout<< "List empty" << std::endl;
        return;
    }

    //determine length of Linked List
    while(placeholder1 != NULL)
    {
        placeholder1 = placeholder1->next;
        Len++;
    }

    //use length of list to determine if out of range
    if(Len < nodeDelete)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }

    //if node to be deleted is the first node then change the
    //head and delete the placeholder
    if(nodeDelete == 1)
    {
        head = head->next;
        delete placeholder1;
        return;
    }

    //traverse Linked List until target node is reached
    while(nodeDelete-1 > 1)
    {
        placeholder2 = placeholder1;
        placeholder1 = placeholder1->next;
    }

    //Link left and right nodes from target and delete target
    placeholder2->next = placeholder1->next;
    delete placeholder1;
    
}



void SLL::printList()
{
    Node *placeholder = head;

    while(placeholder->next != NULL)
    {
        std::cout << placeholder->data + ", " << std::endl;
        placeholder = placeholder->next;
    }
}

//function to print the length of the linked list
void SLL::printLength()
{
    Node *placeholder = head;
    int length = 0;
    while(placeholder->next != NULL)
    {
        length++;

    }
    std::cout << length;
}