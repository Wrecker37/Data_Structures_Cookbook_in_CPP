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

class LLStack{
    Node *head;

    public:
        LLStack(){
            this->head = nullptr;
        }//end of constructor

        void Top(){
            
        }

        void Push(int data){
            Node *newNode = new Node(data);
    
            if(head == nullptr){
                head = newNode;
                return;
            }
            newNode->next = head;
            head = newNode;
        }//end of Push

        void Pop(){
            if(head == nullptr){
                std::cout << "stack is empty : Pop() aborted" << std::endl;
            }
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        bool isEmpty(){
            if(head == nullptr) return true;

            return false;
        }

        int size(){
            Node *temp = head;
            int Len;

            while(temp != nullptr){
                temp = temp->next;
                Len++;
            }

            return Len;
        }//end size()

        void printStack(){
            Node *temp = head;
            while(temp != nullptr){
                printf("%d, ", temp->data);
                temp = temp->next;
            }
        }
};//end of LLStack class

int main(){
    LLStack stack;

    //stack.Push() 10 times with numbers 1-10
    for(int i = 1; i <= 10; i++){
        stack.Push(i);
    }
    stack.printStack();

    std::cout << std::endl;
    printf(stack.isEmpty() ? "true" : "false");
    std::cout << std::endl;

    //stack.Pop() 3 times
    for(int i = 1; i <= 3; i++){
        stack.Pop();
    }
    stack.printStack();


    return 0;
}