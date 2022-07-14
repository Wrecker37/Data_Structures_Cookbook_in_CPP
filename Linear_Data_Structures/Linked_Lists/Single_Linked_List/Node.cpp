#include "Node.h"

Node::Node()
{
    data = 0;
    next = nullptr;
}

Node::Node(int data)
{
    this->data = data;
    this->next = nullptr;

}