#ifndef SLL_H
#define SLL_H

#include "Node.h"

class SLL
{
    Node* head;


    public:
        SLL();
        void insertNode(int data);
        void deleteNode(int nodeDelete);
        void printList();
        void printLength();

};

#endif