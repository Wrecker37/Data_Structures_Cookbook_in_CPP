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
        }//end of constructor

        void insertNode(int data){
            Node *newNode = new Node(data);
            //if head is null then set it to newNode
            if(this->head == nullptr){
                this->head = newNode;
            }else{
                //traverse to end and insert new node
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

            //if head is null then list is empty
            if(head == nullptr){
                std::cout << "list is empty" << std::endl;
                return;
            }

            //count nodes in list
            while(temp->next != nullptr){
                temp = temp->next;
                Len++;
            }

            temp = head;
            //if the length is smaller than position of target node then out of range
            if(Len < offset){
                std::cout << "index out of range" << std::endl;
                return;
            }

            //if target is first node then move head and delete first node
            if(offset == 1){
                head = head->next;
                delete temp;
            }

            //traverse to target node
            while(offset-- < 1){
                prev = temp;
                temp = temp->next;
            }

            //link left and right nodes and delete target
            prev->next = temp->next;
            delete temp;
            
        }//end of deleteNode

        void printList(){
            Node *temp = head;

            while(temp != nullptr){
                printf("%d, ",temp->data);
                temp = temp->next;
            }
            std::cout << std::endl;
        }//end of printList()

        int getLength(){
            Node *temp = head;
            int Len = 0;

            while(temp != nullptr){
                temp = temp->next;
                Len++;
            }
            return Len;
        }//end of getLength()

        void printLength(){
            Node *temp = head;
            int Len = 0;

            while(temp != nullptr){
                temp = temp->next;
                Len++;
            }
            printf("Length: %d\n",Len);
        }//end of printLength()

        void reverseList(){
            Node *prev = nullptr, *temp = head, *next = nullptr;
            while(temp != nullptr){
                next = temp->next;
                temp->next = prev;
                prev = temp;
                temp = next;
            }
            head = prev;
        }//end of reverseList()
};

int main(){
    SLL list;

    list.insertNode(100);
    list.insertNode(200);
    list.insertNode(300);

    list.printList();
    list.printLength();

    list.insertNode(400);

    list.printLength();
     
    list.printList();
    list.reverseList();
    list.printList();

    return 0;
}