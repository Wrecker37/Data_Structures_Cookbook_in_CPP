#include <iostream>

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }


};

class SLL{
    Node *head;

    public:
        SLL(){
            this->head = nullptr;
        }
        void insertNode(int data){
            Node *newNode = new Node(data);
            if(this->head == nullptr){
                this->head = newNode;
            }else{
                Node *temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            
        }


};

int main(){

    

    return 0;
}