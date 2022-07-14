#include "Node.h"
#include "SLL.h"
#include <stdlib.h>
#include <iostream>

int main()
{
    SLL list;

    list.insertNode(100);
    list.insertNode(200);
    list.printList();

    return 0;
}