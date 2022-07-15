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
        }//end of insertNode

        void deleteNode(int offset){
            Node *temp = head, *prev = nullptr;
            int Len = 0;

            if(head == nullptr){
                std::cout << "list is empty" << std::endl;
                return;
            }

            while(temp->next != nullptr){
                temp = temp->next;
                Len++;
            }

            temp = head;
            if(Len < offset){
                std::cout << "index out of range" << std::endl;
                return;
            }

            while(offset-- < 1){
                prev = temp;
                temp = temp->next;
            }
            
        }

        void printList(){
            
        }


};

int main(){

    

    return 0;
}